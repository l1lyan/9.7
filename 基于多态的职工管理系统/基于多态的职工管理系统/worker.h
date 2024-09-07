#pragma once
#include<iostream>//包含输入输出流头文件
using namespace std;//使用标准命名空间
#include<string>

class Worker
{
public:
	//显示个人信息
	virtual void ShowInfo() = 0;
	//获取岗位名称
	virtual string getDeptName() = 0;
	int m_Id;//职工编号、职工姓名、部门编号
	string m_Name;
	int m_DeptId;
};