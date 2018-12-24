// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<string>
#include<iostream>
#include<istream>
int main()
{
   
	turntable *tt = new turntable();
	turntable::sss = tt;
	camera *cc = new camera();
	std::cout << turntable::sss->num;
	std::thread thread5(std::bind(&turntable::run, turntable::sss));
	thread5.detach();


	std::thread thread2(std::bind(&camera::run1, cc));
	thread2.detach();
	std::cout << "ssss";
	getchar();
	std::cout << turntable::sss->num;

	int i;
	cin >> i;


	return 0;

}

