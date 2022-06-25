#pragma once
#include "LifeForm.h"
using namespace std;
class Bacillus :
	public LifeForm
{
public:
	Bacillus(int xpos, int ypos) {
		x = xpos;
		y = ypos;
		NEARBY = 0.3;
		name = 'B';
	}
};
