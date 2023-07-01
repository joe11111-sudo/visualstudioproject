#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Worker.h"

//抽象类：worker 多态

class Boss :public Worker {
public:
	Boss(int id, string name, int depid);

	//显示个人信息
	virtual void showInfo();

	////获取岗位名称
	virtual string getDeptName();
};
