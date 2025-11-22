#pragma once
#include <iostream>
using namespace std;

class Rectangular
{
private:
	int x;
	int y;
	int h;
	int w;
public:
	Rectangular();
	Rectangular(int x1, int y1, int h1, int w1);
	int getX();
	int getY();
	int getH();
	int getW();
	void setX();
	void setY();
	void setH();
	void setW();
	void show();
};

