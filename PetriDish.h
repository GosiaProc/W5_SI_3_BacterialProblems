#pragma once
#include <vector>
#include "LifeForm.h"


using namespace std;

class PetriDish
{
private:
	int xsizeDish , ysizeDish; 
	vector<LifeForm> vectorOfBacterials;
public:
	PetriDish() {
		xsizeDish = 50;
		ysizeDish = 30;
	}
	void print();
	void putRandomBacterials(int numberOfBacterials);
	void putBacterials();
	void timeLaps();
private:
	LifeForm createRandomBacteria();
	vector<vector<char>> createTableWithDots();
	vector<vector<char>> createTableWithBacterials();
};