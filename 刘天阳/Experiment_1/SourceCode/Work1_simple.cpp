// Work1_simple.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include "score.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{   
	score new_stu;
	SS *pstu = NULL;
	pstu=new_stu.Get_Data();
	
	while (new_stu.Show_Menu(pstu))
	;
	return 0;
}

