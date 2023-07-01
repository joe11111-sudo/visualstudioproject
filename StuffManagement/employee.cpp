#include<iostream>
using namespace std;
#include"Employee.h"

//实现功能
Employee::Employee(int id, string name, int depid) {
	this->Id = id;
	this->Name = name;
	this->DepId = depid;
}

//显示个人信息 
void Employee::showInfo() {
	cout << "职工编号" << this->DepId
		<< "\t职工姓名" << this->Name
		<< "\t工位" << this->getDeptName()
		<< "\t工位职责:完成上级交代的任务"
		<< endl;
}

//获取岗位名称
string Employee::getDeptName() {
	return string("职员");
}