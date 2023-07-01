#include<iostream>
#include<string>
#define MAX 1000
using namespace std;

//2.1设计联系人结构体
struct Person {
	string mName;
	int mSex;
	int mAge;
	int mPhone;
	string mAddr;
};

//设计通讯录结构体
struct Addressbooks {
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中当前记录联系人个数
	int mSize;
};

//2.2添加联系人
void addPerson(Addressbooks* abs) {
	//判断通讯录是否已满
	if (abs->mSize == MAX) {
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else {
		//添加具体人
		//姓名
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personArray[abs->mSize].mName = name;

		//性别
		cout << "请输入性别" << endl;
		cout << "1--男" << endl;
		cout << "2--女" << endl;
		int sex = 0;
		while (true) {
			//如果输入是1 or2 可以退出循环
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->mSize].mSex = sex;
				break;
			}
			cout << "输入错误，请重新输入" << endl;
		}

		//年龄
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		while (true) {
			if (age  =0 && age <= 150) {
				abs->personArray[abs->mSize].mAge = age;
				break;
			}
			cout << "输入错误，请重新输入0介于150之间" << endl;
		}

		//电话
		cout << "请输入联系电话" << endl;
		int phone = 0;
		cin >> phone;
		abs->personArray[abs->mSize].mPhone = phone;

		//住址
		cout << "请输入地址" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->mSize].mAddr = address;

		//更新通讯录人数
		abs->mSize++;
		cout << "添加成功" << endl;

		system("pause");	//	按任意键继续
		system("cls");		//清屏操作
	}
}



	//2.显示所有联系人
	void showPerson(Addressbooks * abs) {
		//判断通讯录是否为零，如果为零 提示为空
		//如果不为0，显示记录的联系人信息
		if (abs->mSize == 0) {
			cout << "记录为空" << endl;
		}
		else {
			for (int i = 0;i < abs->mSize; i++) {
				cout << "姓名：" << abs->personArray[i].mName << "\t";
				cout << "性别：" << (abs->personArray[i].mSex == 1 ? "男" : "女") << "\t";
				cout << "年龄：" << abs->personArray[i].mAge << "\t";
				cout << "电话：" << abs->personArray[i].mPhone << "\t";
				cout << "地址：" << abs->personArray[i].mAddr << endl;
			}
		}
		system("pause");
		system("cls");		//清屏
	}

	//检测是否存在，如果存在返回联系人所在数组位置，不在返回-1
	//参数1 通讯录 参数2  对比名字 
	int isExist(Addressbooks * abs, string name) {
		for (int i = 0; i < abs->mSize; i++) {
			//找到用户输入姓名
			if (abs->personArray[i].mName == name) {
				return i;
			}
		}
		return -1;	//如果变量没找到
	}






	//3.删除指定联系人
	void deletePerson(Addressbooks* abs) {
		cout << "请输入要删除的联系人" << endl;

		string name;
		cin >> name;

		//ret = -1  未查到
		//ret！= -1 查到了
		int ret = isExist(abs, name);

		if (ret != -1) {
			//查找到人，删除操作
			for (int i = ret; i < abs->mSize; i++) {
				//数据移动
				abs->personArray[i] = abs->personArray[i+ 1];
				abs->mSize--;				//更新通讯录中的人员数
				cout << "删除成功" << endl;
			}
		}
		else {
			cout << "查无此人" << endl;
		}
		system("pause");
		system("cls");
	}





	//4.查找指定人信息
	void findPerson(Addressbooks* abs) {
		cout << "请输入查找联系人" << endl;
		string name;
		cin >> name;

		//判断指定的联系人是否存在通讯录中
		int ret = isExist(abs, name);

		if (ret != -1) {	//找到联系人
			cout << "姓名" << abs->personArray[ret].mName << "\t";
			cout << "性别" << abs->personArray[ret].mSex << "\t";
			cout << "年龄" << abs->personArray[ret].mAge << "\t";
			cout << "电话" << abs->personArray[ret].mPhone << "\t";
			cout << "住址" << abs->personArray[ret].mAddr << "\t";
		}
		else {	//未找到联系人

			cout << "查无此人" << endl;
		}
		
		//任意键按下后 清屏
		system("pause");
		system("cls");
	}



	
	//5.修改指定人联系信息
	void modifyPerson(Addressbooks* abs) {
		cout << "请输入您要修改的联系人" << endl;
		string name;
		cin >> name;

		int ret = isExist(abs, name);


		if (ret != -1) {	//找到指定联系人
			//姓名
			string name;
			cout << "请输入姓名" << endl;
			cin >> name;
			abs->personArray[ret].mName = name;

			//性别
			cout << "请输入性别" << endl;
			cout << "1---男" << endl;
			cout << "2---女" << endl;
			int sex = 0;
			while (true) {
				if (sex == 1 || sex == 2) {
					abs->personArray[ret].mSex = sex;
					break;
				}
				cout << "输入有误，请重新输入" << endl;
			}

			//年龄
			cout << "请输入年龄" << endl;
			int age = 0;
			cin >> age;
			abs->personArray[ret].mAge = age;

			//电话
			cout << "请输入联系电话" << endl;
			int phone;
			cin >> phone;
			abs->personArray[ret].mPhone = phone;

			//住址
			cout << "请输入住址" << endl;
			string address;
			cin >> address;
			abs->personArray[ret].mAddr = address;

			cout << "修改成功" << endl;
		}
		else {		//	未找到联系人
			cout << "查无此人" << endl;
		}
		//清屏
		system("pause");
		system("cls");
	}





	//6.清空所有联系人
	void cleanPerson(Addressbooks* abs) {
		abs->mSize = 0;	//将当期记录联系人数量置为0，做逻辑清空操作
		cout << "通讯记录已清空" << endl;
		system("pause");
		system("cls");
	}


//1.封装函数显示界面 void  showmenu()
//在main函数中调用封装好的函数
//菜单界面
void showMenu() {
	    
		cout << "******************" << endl;
		cout << "***1.add contect****" << endl;
		cout << "***2.show contect****" << endl;
		cout << "***3.delete contect****" << endl;
		cout << "***4.find contect****" << endl;
		cout << "***5.edit contect****" << endl;
		cout << "***6.delete all****" << endl;
		cout << "***0.exit****" << endl;
		cout << "******************" << endl;
}

int main() {

	//2.创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录当前人员个数
	abs.mSize = 0;


	//1.创建用户选择输入的变量
	int select = 0;
	
	while (true) {
		//菜单的调用
		showMenu();
		cin >> select;

		switch (select) {
		case 1:	//1.添加联系人
			addPerson(&abs);	//利用地址传递修饰形参
			break;

		case 2://2.显示联系人
			showPerson(&abs);					
			break;

		case 3://3.删除联系人
			/*{
				cout << "请输入删除姓名" << endl;
				string name;
				cin >> name;

				if(isExist(&abs, name) == -1) {
					cout << "查无此人" << endl;
				}
				else {
					cout << "找到此人" << endl;
				}
			*/
			deletePerson(&abs);
			break;

		case 4:	//4.查找联系人
			findPerson(&abs);
			break;

		case 5:	//5.修改联系人
			modifyPerson(&abs);
			break;

		case 6:	//6.清空联系人
			cleanPerson(&abs);
			break;

		case 0:	//0.退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;

		default:
			break;
		}
	}
	
	system("pause");

	return 0;
}