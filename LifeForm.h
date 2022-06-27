#pragma once
#include <string>
#include <vector>

using namespace std;
class LifeForm
{
protected:
	double NEARBY;
public:
	int x, y;
	char name;
	bool isNear(LifeForm);
	bool isSurvivor(vector<LifeForm> vectorOfBacterials);
};
