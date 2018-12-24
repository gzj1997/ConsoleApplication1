#pragma once
#include<thread>
#include<string>
#include<string>
#include<iostream>
#include<istream>
using namespace std;

class turntable

{
public:
	turntable();
	~turntable();

	static turntable* sss;

	int num;

	void run();
private:

};

