#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"workerManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
using namespace std;


int main()
{ 
	WorkerManager wm;

	/*Worker* worker = NULL;
	worker = new Employee(1, "����", 1);
	worker->ShowInfo();
	delete worker;

	worker = new Manager(2, "����", 2);
	worker->ShowInfo();
	delete worker;

	worker = new Boss(3, "����", 3);
	worker->ShowInfo();
	delete worker;*/   //����Ƕ�̬��һ���ӿ��ж����̬����������ͬ����ʾҲ��ͬ

	while (true)
	{
		wm.Show_Menu();
		int choice;
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://�˳�ϵͳ
			wm.ExitSystem(); 
			break;
		case 1://����ְ��
			wm.Add_Emp();
			break;
		case 2://��ʾְ��
			wm.Show_Emp();
			break;
		case 3://ɾ��
			wm.Del_Emp();
			break;
		case 4://�޸�
			wm.Mod_Emp();
			break;
		case 5://����
			wm.Find_Emp();
			break;
		case 6://����
			wm.Sort_Emp();
			break;
		case 7://���
			wm.Clean_File();
			break;
		default:
			cout << "����������������룺" << endl;
			break;
		}
	}
	
	system("pause");
	return 0;
}