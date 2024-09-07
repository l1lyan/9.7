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
	worker = new Employee(1, "张三", 1);
	worker->ShowInfo();
	delete worker;

	worker = new Manager(2, "李四", 2);
	worker->ShowInfo();
	delete worker;

	worker = new Boss(3, "王五", 3);
	worker->ShowInfo();
	delete worker;*/   //这就是多态，一个接口有多个形态，创建对象不同，显示也不同

	while (true)
	{
		wm.Show_Menu();
		int choice;
		cout << "请输入您的选择：" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://退出系统
			wm.ExitSystem(); 
			break;
		case 1://增加职工
			wm.Add_Emp();
			break;
		case 2://显示职工
			wm.Show_Emp();
			break;
		case 3://删除
			wm.Del_Emp();
			break;
		case 4://修改
			wm.Mod_Emp();
			break;
		case 5://查找
			wm.Find_Emp();
			break;
		case 6://排序
			wm.Sort_Emp();
			break;
		case 7://清空
			wm.Clean_File();
			break;
		default:
			cout << "输入错误，请重新输入：" << endl;
			break;
		}
	}
	
	system("pause");
	return 0;
}