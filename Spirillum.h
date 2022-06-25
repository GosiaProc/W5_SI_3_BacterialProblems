#pragma once
#include "LifeForm.h"
using namespace std;
class Spirillum :
	public LifeForm
{
public:
		Spirillum(int xpos, int ypos)
	{
			x = xpos;
			y = ypos;
		NEARBY = 0.2;
		name = 'S';
	}
};

