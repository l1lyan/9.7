#pragma once
#include<iostream>//�������������ͷ�ļ�
using namespace std;//ʹ�ñ�׼�����ռ�
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	//���캯��
	WorkerManager();
	//չʾ�˵�
	void Show_Menu();
	//�˳�ϵͳ
	void ExitSystem();

	//��¼ְ������
	int m_EmpNum;
	//��¼ְ������ָ��
	Worker** m_EmpArray;
	//���ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//��ȡ�ļ�����ְ����
	int get_EmpNum();
	
	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//�ж�ְ���Ƿ����
	int IsExist(int id);
	//ɾ��ְ��
	void Del_Emp();

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//��������
	~WorkerManager();


};