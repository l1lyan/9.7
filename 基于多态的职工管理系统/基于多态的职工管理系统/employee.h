#pragma once
//普通员工文件

#include<iostream>//包含输入输出流头文件
using namespace std;//使用标准命名空间
#include<string>
#include"worker.h"


class Employee:public Worker
{
public:
	Employee(int id,string name, int dId);//构造函数

	virtual void ShowInfo();//显示个人信息

	virtual string getDeptName();//获取岗位名称

};