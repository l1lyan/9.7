#pragma once
#include<iostream>//�������������ͷ�ļ�
using namespace std;//ʹ�ñ�׼�����ռ�
#include<string>
#include"worker.h"

class Manager:public Worker
{
public:
	//���캯��
	Manager(int id, string name, int dId);

	virtual void ShowInfo();//��ʾ������Ϣ

	virtual string getDeptName();//��ȡ��λ����
};
