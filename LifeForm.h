#pragma once
#include <string>

using namespace std;
class LifeForm
{
protected:
	double NEARBY;
public:
	int x, y;
	char name;
	bool isNear(LifeForm);

};

LifeForm random(int x, int y);
