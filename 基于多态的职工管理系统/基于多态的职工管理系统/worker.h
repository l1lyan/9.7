#pragma once
#include<iostream>//�������������ͷ�ļ�
using namespace std;//ʹ�ñ�׼�����ռ�
#include<string>

class Worker
{
public:
	//��ʾ������Ϣ
	virtual void ShowInfo() = 0;
	//��ȡ��λ����
	virtual string getDeptName() = 0;
	int m_Id;//ְ����š�ְ�����������ű��
	string m_Name;
	int m_DeptId;
};