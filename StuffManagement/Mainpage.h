#pragma once	//防止头文件重复包含
#include<iostream>	//包含输入输出流文件
using namespace  std; //使用标准命名空间
#include"Worker.h"
#include"Employee.h"
#include"Boss.h"
#include"Manager.h"

#include<fstream>
#define FILENAME"empFile.txt"

//抽象类 功能
//头：提供功能

//管理类负责内容如下
//~与用户沟通菜单界面
//~对职工增删改查操作
//~与文件的读写交互

class Mainpage {
public:
	//构造函数
	Mainpage();

	//展示菜单
	void Show_Menu();

	//退出系统
	void Exit_System();


	//记录职工人数
	int EmpNum;

	//职工数组指针
	Worker** EmpArray;

	//添加职工
	void Add_Emp();

	//保存文件
	void save();

	//判断文件是否为空
	bool FileIsEmpty;

	//统计文件中人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//判断只狗狗是否存在 如果存在返回职工所在数组位置，不存在返回-1
	int IsExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序工号
	void Sort_Emp();

	//清空文件的操作
	void Clean_File();


	//析构函数
	~Mainpage();

};