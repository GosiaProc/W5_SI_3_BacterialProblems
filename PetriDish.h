#pragma once
#include <vector>
#include "LifeForm.h"
#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

class PetriDish
{
private:
	int xsizeDish , ysizeDish; 
	vector<LifeForm> vectorOfBacterials;
public:
	PetriDish() {
		xsizeDish = 50;
		ysizeDish = 50;
		//srand(time(0));
	}
	void print();
	void putRandomBacterials(int numberOfBacterials);
	void putRandomNewBacterials(int numberOfBacterials);
	void timeLaps();
private:
	LifeForm createRandomBacteria();
	LifeForm createRandomNewBacteria(int i);
	vector<vector<char>> createTableWithDots();
	vector<vector<char>> createTableWithBacterials();
	
};