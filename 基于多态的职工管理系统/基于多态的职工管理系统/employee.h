#pragma once
//��ͨԱ���ļ�

#include<iostream>//�������������ͷ�ļ�
using namespace std;//ʹ�ñ�׼�����ռ�
#include<string>
#include"worker.h"


class Employee:public Worker
{
public:
	Employee(int id,string name, int dId);//���캯��

	virtual void ShowInfo();//��ʾ������Ϣ

	virtual string getDeptName();//��ȡ��λ����

};