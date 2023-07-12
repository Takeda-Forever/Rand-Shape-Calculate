#include <iostream>
#include <random>
#include <time.h>
#include "option.h"
#include <thread>
#include <chrono>

int main()
{
	srand(time(NULL));
	int x = 2, y = 3, _x = 4, _y = 5;
	double w = 0, h = 0, r = 0;
	int* n[4] = { &x, &y, &_x, &_y };
	double* _n[3] = { &w,&h,&r };
	std::unique_ptr<Rectangle> rect;
	std::unique_ptr<Circle>circle;

	while (1)
	{
		for (auto* i : n)
			*i = 1 + rand() % 50;
		for (auto* i : _n)
			*i = 1 + rand() % 50;

		rect = std::make_unique<Rectangle>(x, y, w, h);
		circle = std::make_unique<Circle>(_x, _y, r);

		printf("Rectangle Normal Parameters: \n");	rect->GetAllParam();
		printf(line);
		printf("Circle Normal Parameters: \n");	circle->GetAllParam();
		
		std::this_thread::sleep_for(std::chrono::seconds(3));
		system("cls");
	}
}


