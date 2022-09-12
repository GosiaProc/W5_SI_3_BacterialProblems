#pragma once
#include <string>
#include <vector>

using namespace std;
class LifeForm
{
protected:
	double NEARBY;
public:
	double x, y;
	char name;
	bool isAlive;
	bool isNear(LifeForm);
	bool isSurvivor(vector<LifeForm> vectorOfBacterials);
	double getNearby();
	
};
