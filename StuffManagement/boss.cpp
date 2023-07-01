#include<iostream>
#include<string>
using namespace std;
#include"Boss.h"

//实现类功能

Boss::Boss(int id, string name, int depid) {
	this->Id = id;
	this->Name = name;
	this->DepId = depid;
}

//显示个人信息
void Boss::showInfo() {
	cout << "职工编号" << this->DepId
		<< "\t职工姓名" << this->Name
		<< "\t工位" << this->getDeptName()
		<< "\t工位职责:完成上级交代的任务"
		<< endl;
}

////获取岗位名称
string Boss::getDeptName() {
	return string("老板");
}