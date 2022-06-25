#pragma once
#include "LifeForm.h"
using namespace std;
class Coccus :
    public LifeForm
{
public:
	Coccus(int xpos,int ypos) {
		x = xpos;
		y = ypos;

		NEARBY = 0.1;
		name = 'C';
	}
};

