#pragma once
#include "LifeForm.h"
using namespace std;
class Spirillum :
	public LifeForm
{
public:
		Spirillum(double xpos, double ypos)
	{
			x = xpos;
			y = ypos;
		NEARBY = 0.2;
		name = 'S';
	}
		bool isSurvivor(vector<LifeForm> vectorOfBacterials);


};

