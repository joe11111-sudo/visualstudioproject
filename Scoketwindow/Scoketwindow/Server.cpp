#include"stdafx.h"
#include<stdio.h>
#include<winsock2.h>	//socket头文件
#include<iostream>
#include<cstring>
#include<stdlib.h>
#pragma comment(lib,"ws2_32.lib")	//连接ws2_32.lib库文件到此项目
using namespace std;

/*server->socket()->bind()->listen()->accept()->recv()->close()*/

//----------------------------------全局常量---------------------------------
 const int BUF_SIZE=2048;	//定义缓冲区
 const int NICENAME_LEN = 20;	//名称长度，每个客户端都有一个昵称
 const int MAX_CLIENT_COUNT = 10;	//客户端数量
 const int COLOR_INFO = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;//亮黄色
 const int COLOR_NORMAL = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN; //白色
 const int COLOR_ERROR = FOREGROUND_RED | FOREGROUND_INTENSITY;	//亮红
 const int COLOR_NORMAL_I = COLOR_NORMAL | FOREGROUND_INTENSITY;

//----------------------------------全局变量---------------------------------
SOCKET sockSer, sockCli;
SOCKADDR_IN addrSer, addrCli;	//address
int naddr = sizeof(SOCKADDR_IN);	

char sendbuf[BUF_SIZE];	//发送缓冲区
char inputbuf[BUF_SIZE];//输入内容缓冲区
char recvbuf[BUF_SIZE];	//接受信息的缓冲区
char localIP[50];	//本地地址IP

struct Client {
	SOCKET S;
	SOCKADDR_IN SIN;
	CHAR NAME[NICENAME_LEN];
}cli[MAX_CLIENT_COUNT];

//-------------------------------函数声明--------------------------------------------
DWORD WINAPI Server_Listen_Thread(LPVOID lp);	//监听信息（线程）
DWORD WINAPI Server_Receive_Thread(LPVOID lp);	//接受信息（线程）
void getLocalIP(char localIP[], int n);
void setColor(int color);

int main() {
	//加载socket库
	//应用程序socket函数来创建网络通信的套接字
	WSADATA wsadata;	//生成句柄
	if (WSAStartup(MAKEWORD(2, 2), &wsadata)!=0)
	{

		cout << "install stock fail" << endl;
		system("pause");
		return 0;
	}


	//创建Socket
	//AF_INET格式 （ipv4）
	//TCP 协议（comfirm received）
	//UDP 协议（not comfirm recieved)
	sockSer = socket(AF_INET, SOCK_STREAM, 0);

	//初始化地址包
	//sin_addr.S_un 结构体
	addrSer.sin_addr.S_un.S_addr = inet_addr("192.168.1.110");	//作为服务器的ip
	addrSer.sin_family = AF_INET;
	addrSer.sin_port = htons(12248);//1024端口以下都被占用，40k++ 开发注册

	//绑定Socket	###bind（）
	//将addrSer 强制转换成SOCKADDR*指针
	bind(sockSer, (SOCKADDR*) &addrSer, sizeof(SOCKADDR));


	//创建接受线程
	LPVOID *lp_link = (LPVOID*)&sockSer;
	HANDLE hT_Accept_Link = CreateThread(NULL, 0, Server_Listen_Thread, lp_link, 0, NULL);


	//创建接受线程
	LPVOID *lp_recv = (LPVOID*)&sockSer;
	HANDLE hT_Recv = CreateThread(NULL, 0, Server_Receive_Thread, lp_recv, 0, NULL);

	//循环接受
	while (1) {
		cin.getline(inputbuf, BUF_SIZE);
	}
	
	while (1) {
		//监听连接请求
		listen(sockSer, 5);

		//接受连接
		sockCli[clientCount + 1].s = accept(sockSer, (SOCKADDR*)&sockCli[clientCount + 1].sin, & naddr);
		
		//接搜连接请求
		//取得值必须用到naddr 变量
		//这个只连接1个客户端
		//sockCli=accept(sockSer, (SOCKADDR*)&addrCli, &naddr);

		//创建一个新的套接口与客户端的套接口连接，之后的通信都从这个接口执行
		if (sockCli != INVALID_SOCKET) {
			 
			clientCount++;
			//接受客户端姓名
			recv(sockCli[clientCount].s, sockCli[clientCount].name, BUF_SIZE, 0);

			//欢迎信息(发给每个客户端）
			cout << "connected" << endl;
			strcpy(sendbuf, "welcome");
			strcpy(sendbuf, sockCli[clientCount].name);
			strcpy(sendbuf, "hello");

			for (int i = 1; i <= clientCount; i++) {
				send(sockCli[i], sendbuf, BUF_SIZE, 0);
			}
		}
	}
	
	closesocket(sockSer);
	closesocket(sockCli);
	WSACleanup();	//结束调用
	return 0;
}

void setColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


DWORD WINAPI Client_Receive_Thread(LPVOID lp) {
	SOCKET* S = (SOCKET*)lp;
	int nrecv;
	while (1)
	{
		nrecv = recv(sockCli, recvbuf, size(recvbuf), 0);
			if(nrecv > 0)	//如果接受到信息
			{
				cout << recvbuf << endl;
			}
	}



