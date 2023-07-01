#include"stdafx.h"
#include<stdio.h>
#include<winsock2.h>	//socket头文件
#include<iostream>
#include<cstring>
#include<stdlib.h>
#pragma comment(lib,"ws2_32.lib")	//连接ws2_32.lib库文件到此项目
using namespace std;


/*client->socket()->connect()->sned->close()*/



//----------------------------------全局常量---------------------------------
const int BUF_SIZE = 2048;	//定义缓冲区
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
char sendbuf[BUF_SIZE];	//字符数组的缓冲区
char inputbuf[BUF_SIZE];	//输入内容缓冲区
char recvbuf[BUF_SIZE];	//接受信息的缓冲区




int main() {
	//加载socket库
	WSADATA wsadata;
	if (WSAStartup(MAKEWORD(2, 2), &wsadata) != 0)
	{

		cout << "install stock fail" << endl;
		system("pause");
		return 0;
	}


	//创建Socket
	sockSer = socket(AF_INET, SOCK_STREAM, 0);

	//初始化客户端地址包
	addrCli.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");	//127.0.0.1回传地址
	addrCli.sin_family = AF_INET;
	addrCli.sin_port = htons(12248);

	//初始化服务器地址包
	addrSer.sin_family = AF_INET;
	addrSer.sin_addr.s_addr = inet_addr("192.168.1.110");
	addrSer.sin_port = htons(12248);

	//连接到服务端
	setColor(COLOR_INFO);
	cout << "connecting...." << endl;
	setColor(COLOR_NORMAL);
	int nrecv;

	while (1) 
	{
		//将服务器的地址包与本客户端的套接字连接
		if (connect(sockCli, (SOCKADDR*)&addrSer, sizeof(addrSer))!=SOCKET_ERROR) {
			setColor(COLOR_SUCCESS);
			cout << "connected" << endl;
			setColor(COLOR_NORMAL);
			
			//发送个人信息
			send(sockCli, client_name, sizeof(client_name), 0);
			//显示出了
			cout << client_name << endl;

			break;
		}
	}

	//循环接受输入
	while (1) {
		cin.getline(inputbuf, BUF_SIZE);

		//退出点
		if (strcmp(inputbuf, "exit") == 0)
			break;

		strcpy(sendbuf, client_name);
		strcpy(sendbuf, inputbuf);
		send(sockCli, sendbuf, BUF_SIZE, 0);

	}

	closesocket(sockSer);
	closesocket(sockCli);
	WSACleanup();	//结束调用
	return 0;
}