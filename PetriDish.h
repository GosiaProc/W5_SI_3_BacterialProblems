#pragma once
#include <vector>
#include "LifeForm.h"


using namespace std;

class PetriDish
{
private:
	int xsize , ysize; //wymiary szalki
	vector<LifeForm> lifeForms;
public:
	PetriDish() {
		xsize = 50;
		ysize = 30;
	}
	void print();
	void putRandomBacterials(int numberOfBacterials);
	void putBacterials();
private:
	LifeForm createRandomBacteria();
	vector<vector<char>> createTableWithDots();
	vector<vector<char>> createTableWithBacterials();
};