#define _CRT_SECURE_NO_WARNINGS 1
#include"manager.h"

Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Manager::ShowInfo()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ������ϰ彻�������񣬲��ҷ������Ա��" << endl;   //\tˮƽ�Ʊ��
}

string Manager::getDeptName()
{
	return string("����");
}