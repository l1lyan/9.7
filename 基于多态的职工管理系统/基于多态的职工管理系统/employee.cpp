#define _CRT_SECURE_NO_WARNINGS 1
#include"employee.h"

Employee::Employee(int id, string name, int dId)//构造函数
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Employee::ShowInfo()//显示个人信息
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<<"\t岗位职责：完成经理交给的任务" << endl;   //\t水平制表符
		
}

string Employee::getDeptName()//获取岗位名称
{
	return string("普通员工");
}