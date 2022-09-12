#pragma once
#include "LifeForm.h"
using namespace std;
class Coccus :
    public LifeForm
{
public:
	Coccus(double xpos, double ypos) {
		x = xpos;
		y = ypos;

		NEARBY = 0.1;
		name = 'C';
	}
	bool isSurvivor(vector<LifeForm> vectorOfBacterials);

};

