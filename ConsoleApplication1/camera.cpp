#include "stdafx.h"
#include "camera.h"

camera::camera()
{
}

camera::~camera()
{
}

void camera::run1()
{
	while (turntable::sss->num ==0)
	{
		this_thread::sleep_for(std::chrono::milliseconds(20));
	}
	cout << "run1";
}
