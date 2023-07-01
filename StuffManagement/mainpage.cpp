#include<iostream>	
#include<string>
using namespace std;
#include "Mainpage.h"
#include "Worker.h"



//构造函数
Mainpage::Mainpage() {

	//1文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);	//读文件

	if (!ifs.is_open()) {
		cout << "文件不存在" << endl;

		//初始化人数
		this->EmpNum = 0;
		//初始化数组指针
		this->EmpArray = NULL;
		//初始化文件是否为空
		this->FileIsEmpty = true;
		ifs.close();
		return;
	}
	//2文件存在 数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		//文件为空
		cout << "文件为空" << endl;
		//初始化人数
		this->EmpNum = 0;
		//初始化数组指针
		this->EmpArray = NULL;
		//初始化文件是否为空
		this->FileIsEmpty = true;
		ifs.close();
		return;
	}
	//3.文件存在，并且记录数据
	int num = this->get_EmpNum();
	cout << "职工人数为" << num << endl;


	//开辟空间
	this->EmpArray = new Worker * [this->EmpNum];
	//将文件中数据，存到数组中
	this->init_Emp();

	//测试代码
	for(int i = 0 ; i <this->EmpNum;i++){

		cout << "职工编号" << this->EmpArray[i]->Id
			 << "姓名"    << this->EmpArray[i]->Name
			 << "部门编号" << this->EmpArray[i]->DepId << endl;
	}
}



//展示菜单
void Mainpage::Show_Menu() {
	cout << "**********************************" << endl;
	cout << "******* 欢迎使用职工管理系统 *******" << endl;
	cout << "******** 0.退出管理程序 ********" << endl;
	cout << "******** 1.增加职工信息 ********" << endl;
	cout << "******** 2.显示职工信息 ********" << endl;
	cout << "******** 3.删除离职职工 ********" << endl;
	cout << "******** 4.修改职工信息 ********" << endl;
	cout << "******** 5.查找职工信息 ********" << endl;
	cout << "******** 6.按照编号排序 ********" << endl;
	cout << "******** 7.清空所有文档 ********" << endl;
	cout << "**********************************" << endl;
	cout << endl;
}

//退出系统
void Mainpage::Exit_System() {
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);	//退出程序
}

// 添加职工
void Mainpage::Add_Emp() {
	cout << "请输入添加职工数量=" << endl;

	int addNum = 0;	//保存用户输入数量
	cin >> addNum;
	if (addNum > 0) {
		//添加
		//计算添加新空间大小
		int newSize = this->EmpNum + addNum;	//新空间人数=原来人数+新增人数

		//动态扩展：（数组）开辟新空间
		Worker** newSpace = new Worker * [newSize];

		//将原来空间数据，拷贝到新空间
		if (this->EmpArray != NULL) {
			for (int i = 0; i < this->EmpNum;i++) {
				newSpace[i] = this->EmpArray[i];
			}
		}
		//批量添加新数据
		for (int i = 0; i < addNum;i++) {
			int id;
			string name;
			int dSelect;

			cout << "请输入第" << i + 1 << "新职工编号" << endl;
			cin >> id;

			cout << "请输入第" << i + 1 << "新职工姓名" << endl;
			cin >> name;

			cout << "请选择职工岗位" << endl;
			cout << "1.普通员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect) {
			case1:
				worker = new Employee(id, name, 1);
				break;
			case2:
				worker = new Manager(id, name, 2);
				break;
			case3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			//将创建职工职责，保存到数组中
			newSpace[this->EmpNum + i] = worker;
		}

		//释放原有的空间
		delete[]this->EmpArray;

		//更改新空间指向
		this->EmpArray = newSpace;

		//更新新职工人数
		this->EmpNum = newSize;

		//更新职工不为空的标志
		this->FileIsEmpty = false;

		//提示添加成功
		cout << "sucess" << addNum << "number" << endl;

		//保存数据到文件中
		this->save();
	}
	else {
		cout << "输入有误" << endl;
	}
	//任意键 清屏回到上级目录
	system("pause");
	system("cls");
}

void Mainpage::save() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out);	//用输出的方式打开文件--写文件

		//将每一个人数据写入到文件中
	for (int i = 0; i < this->EmpNum;i++) {
		ofs << this->EmpArray[i]->Id << "姓名" << " "
			<< this->EmpArray[i]->Name << "姓名" << " "
			<< this->EmpArray[i]->DepId << "姓名" << endl;
	}

	//关闭
	ofs.close();
}

//统计文件中人数
int Mainpage::get_EmpNum() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);	//打开文件 读

	int id;
	string name;
	int dId;

	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId) {
		//统计人数 
		num++;
	}
	return num;
}


//初始化员工
void Mainpage::init_Emp() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);	//读

	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId) {
		Worker* worker = NULL;
		if (dId == 1) {//普通员工
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2) {
			worker = new Boss(id, name, dId);
		}else
			worker = new Manager(id, name, dId);
		}
}


//显示职工
void Mainpage::Show_Emp() {
	//判断文件是否为空
	if (this->FileIsEmpty) {
		cout<<"文件不存在" << endl;
	}
	else {
		for (int i = 0;i < EmpNum;i++) {
			//利用多态调动程序接口
			this->EmpArray[i]->showInfo();
		}
	}
	//清屏
	system("pause");
	system("cls");
}


//删除职工
void Mainpage::Del_Emp(){
	if (this->FileIsEmpty) {
		cout << "文件不存在" << endl;
	}
	else {
		//按照职工编号删除
		cout << "请输入想要删除职工编号" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);
		if (index != -1) {		//说明职工存在
			//
			for (int i = index ; i < this->EmpNum ; i++) {
				//数据前移
				this->EmpArray[i]=this->EmpArray[i+1];
			}
			this->EmpNum--;	//更新数组中记录人员个数
			//同步更新到文件
			this->save();

			cout << "删除成功" << endl;
		}
		else {
			cout << "删除失败，未找到该职工" << endl;
		}
	}
	system("pause");
	system("cls");
}


//判断只狗狗是否存在 如果存在返回职工所在数组位置，不存在返回-1
int Mainpage::IsExist(int id) {
	int index = -1;
	for (int i = 0;i < this->EmpNum;i++) {
		if (this->EmpArray[i]->Id == id) {
			//找到职工
			index = i;
			break;
		}
	}
	return index;
}


//修改职工
void Mainpage::Mod_Emp() {
	if (this->FileIsEmpty) {
		cout << "文件不存在" << endl;
	}
	else {
		cout << "请输入修改职工编号" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1) {
			//查找编号的职工
			delete this->EmpArray[ret];

			int newId = 0;
			string newName = " ";
			int dSelect = 0;

			cout << "查找：" << id << " 号职工，请输入职工号 " << endl;
			cin >> newId;

			cout << "输入新姓名" << endl;
			cin >> newName;

			cout << "请输入岗位" << endl;
			cout << "1.老板：" << endl;
			cout << "2.经理" << endl;
			cout << "3.员工" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect) {
			case1:
				worker = new Employee(newId, newName,dSelect);
				break;
			case2:
				worker = new Boss(newId, newName, dSelect);
				break;
			case3:
				worker = new Manager(newId, newName, dSelect);
				break;
			default:
				break;
			}

			//更新数据 到数组中
			this->EmpArray[ret] = worker;
			cout << "修改成功" << endl;

				//保存到文件
			this->save();
			}else{
			cout << "修改失败，查无此人" << endl;
		}
	}
		
	system("pause");
	system("cls");
}


//查找职工
void Mainpage::Find_Emp(){
	if (this->FileIsEmpty) {
		cout << "文件不存在" << endl;
	}
	else {
		cout << "请输入查找方式" << endl;
		cout << "1.职工编号" << endl;
		cout << "2.职工姓名" << endl;
		int select = 0;
		cin >> select;

		if (select == 1) {
			//按照编号查
			int id;
			cout << "请输入查找职工编号" << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1) {
				//找到
				cout << "查找成功,信息如下" << endl;
				this->EmpArray[ret]->showInfo();
			}
			else {
				cout << "查找失败，查无此人" << endl;
			}
		}
		else if (select == 2) {
			string name;
			cout << "请输入查找职工姓名" << endl;
			cin >> name;

			//判断是否查找到标志
			bool flag = false;	//默认

			for (int i = 0; i < EmpNum;i++) {
				if (this->EmpArray[i]->Name == name) {
					cout << "查找成功,信息如下" << this->EmpArray[i]->Id << endl;

					flag = true;

					//调用显示信息接口
					this->EmpArray[i]->showInfo();

				}
				else if (flag == false) {
					cout << "查找失败，查无此人" << endl;
				}
			}
		}
		else {
			cout << "输入有误" << endl;
		}
	}

	system("pause");
	system("cls");
}



//排序工号
void Mainpage::Sort_Emp() {
	if (this->FileIsEmpty) {
		cout << "文件不存在记录为空" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "选择排序方式" << endl;
		cout << "1.按职工号进行升序" << endl;
		cout << "2.按职工号进行降序" << endl;

		int select = 0;
		cout << "您选择，排序方式是？" << endl;
		cin >> select;

		for (int i = 0;i < EmpNum;i++) {
			int minOrMax = i;	//声明最小 or 最大的下标
			if (select == 1) {	//升序
				for (int j = i + 1;j < EmpNum;j++) {
					if (this->EmpArray[minOrMax]->Id > this->EmpArray[j]->Id) {
						minOrMax = j;	//最小
					}
					else {			//降序
						if (this->EmpArray[minOrMax]->Id < this->EmpArray[j]->Id) {
							minOrMax = j;	//最大
						}
					}
				}
				//判断一开始是不是最小值or最大值 是不是计算最小值或最大值 如果不是 交换数据
				if (i != minOrMax) {
					Worker* temp = this->EmpArray[i];
					this->EmpArray[i] = this->EmpArray[minOrMax];
					this->EmpArray[minOrMax] = temp;
				}
			}
			cout << "排序成功！排序后的结果=" << endl;
			this->save();	//保存到文件中
			this->Show_Emp();	//展示所有职工
		}
	}
}	



//清空文件的操作
void Mainpage:: Clean_File(){
	cout << "确定清空吗" << endl;
	cout << "1.sure" << endl;
	cout << "2.back" << endl;
	int select = 0; 
	cin >> select;

	if (select == 1) {
		//清空文件
		ofstream ofs(FILENAME, ios::trunc);		//删除文件
		ofs.close();

		if (this->EmpArray != NULL) {
			//删除堆区每个职工对象
			for (int i = 0; i < this->EmpNum;i++) {
				delete this->EmpArray[i];
				this->EmpArray = NULL;
			}

			//删除堆区数组指针
			delete[] this->EmpArray;
			this->EmpArray = NULL;
			this-> EmpNum = 0;
			this->FileIsEmpty = true;
		}
		cout << "清空成功" << endl;
	}
	system("pause");
	system("cls");
}


Mainpage::Mainpage() {
	if (this->EmpArray != NULL) {
		for (int i = 0; i < this->EmpNum;i++) {
			if (this->EmpArray != NULL) {
				delete this->EmpArray[i];
			}
		}
		delete[] this->EmpArray;
		this->EmpArray = NULL;
	}
}




