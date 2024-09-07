#pragma once
#include<iostream>//包含输入输出流头文件
using namespace std;//使用标准命名空间
#include<string>
#include"worker.h"

class Boss:public Worker
{
public:
	//构造函数
	Boss(int id, string name, int dId);

	virtual void ShowInfo();//显示个人信息

	virtual string getDeptName();//获取岗位名称
};
