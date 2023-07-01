#include<iostream>
using namespace std;
#include"Worker.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"
#include "Mainpage.h"


//实例化

int main() {
	Worker* worker = NULL;
	worker = new Employee(1,"joe",1);
	worker->showInfo();
	delete worker;

	worker = new Boss(2, "zen", 2);
	worker->showInfo();
	delete worker;

	worker = new Manager(3, "kelvin", 3);
	worker->showInfo();
	delete worker;



	//实例化管理者对象
	Mainpage mp;
	int choice = 0;		//初始化选择
	while (true) {

		mp.Show_Menu();		//调用展示菜单成员函数
		cout << "请输入选择" << endl;
		cin >> choice;

		switch (choice) {
		case0:
			mp.Exit_System();
			break;
		case1:
			mp.Add_Emp();
			break;
		case2:
			mp.Show_Emp();
			break;
		case3:
			mp.Del_Emp();
			//测试
		  /*int ret = mp.IsExist(1);
			if (ret != -1) {
				cout << "职工存在" << endl;
			}
			else(
				cout << "职工不存在" << endl;
		}*/
			break;
		case4:
			mp.Mod_Emp();		
			break;
		case5:
			mp.Find_Emp();
			break;
		case6:
			mp.Sort_Emp();
			break;
		case7:
			mp.Clean_File();
			break;
		default:
			system("cls");		//清屏
			break;
		}
	}

	system("pause");
	return 0;
}