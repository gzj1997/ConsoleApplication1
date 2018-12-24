#include "stdafx.h"
#include "test.h"
turntable* turntable::sss = nullptr;
turntable::turntable()
{
	num = 0;
}

turntable::~turntable()
{
}

void turntable::run()
{
	cout << "run";
	this_thread::sleep_for(std::chrono::milliseconds(2000));
	num++;
	

}
