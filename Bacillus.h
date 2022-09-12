#pragma once
#include "LifeForm.h"
using namespace std;
class Bacillus :
	public LifeForm
{
public:
	Bacillus(double xpos, double ypos) {
		x = xpos;
		y = ypos;
		NEARBY = 0.3;
		name = 'B';
	}
	bool isSurvivor(vector<LifeForm> vectorOfBacterials);

};
