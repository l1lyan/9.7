#define _CRT_SECURE_NO_WARNINGS 1
#include"employee.h"

Employee::Employee(int id, string name, int dId)//���캯��
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Employee::ShowInfo()//��ʾ������Ϣ
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDeptName()
		<<"\t��λְ����ɾ�����������" << endl;   //\tˮƽ�Ʊ��
		
}

string Employee::getDeptName()//��ȡ��λ����
{
	return string("��ͨԱ��");
}