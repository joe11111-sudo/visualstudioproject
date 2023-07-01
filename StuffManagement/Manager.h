#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"Worker.h"

//抽象类 继承 Worker的多态

class Manager :public Worker {
public:
	Manager(int id, string name, int depid);

	//显示个人信息 
	virtual void showInfo();

	////获取岗位名称
	virtual string getDeptName();
};