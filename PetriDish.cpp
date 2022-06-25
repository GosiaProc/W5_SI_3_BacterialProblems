#include <iostream>
#include "PetriDish.h"
#include <vector>
#include "LifeForm.h"
#include "Spirillum.h"
#include "Bacillus.h"
#include "Coccus.h"

using namespace std;

vector<vector<char>> PetriDish::createTableWithDots() {

	vector<vector<char>> table;
	for (int j = 0; j < ysize; j++) {
		vector<char> row;
		for (int i = 0; i < xsize; i++)
			row.push_back('.');
		table.push_back(row);
	}
	return table;
}


vector<vector<char>> PetriDish::createTableWithBacterials()
{
	vector<vector<char>> table = createTableWithDots();
	for (int i = 0; i < lifeForms.size(); i++) {
		LifeForm object = lifeForms[i];
		table[object.y][object.x] = object.name;
	}
	return table;
}

void PetriDish::print() {
	vector<vector<char>> table = createTableWithBacterials();
	for (int y = 0; y < ysize; y++) {
		for (int x = 0; x < xsize; x++) {
			cout << table[y][x];
		}
		cout << endl;
	}
}

void PetriDish::putRandomBacterials(int numberOfBacterials)
{
}

void PetriDish::putBacterials()
{
	// todo genarate random
	Spirillum s1(3, 3);
	lifeForms.push_back(s1);
	Spirillum s2(3, 6);
	lifeForms.push_back(s2);
	Spirillum s3(3, 7);
	lifeForms.push_back(s3);
	Spirillum s4(3, 10);
	lifeForms.push_back(s4);
	Spirillum s5(3, 13);
	lifeForms.push_back(s5);
	Spirillum s6(3, 29);
	lifeForms.push_back(s6);
}

LifeForm PetriDish::createRandomBacteria() {
	int x, y, t;
	x = rand() % xsize;
	y = rand() % ysize;
	t = rand() % 3;

	if (t == 0)
		return 	Bacillus(x, y);
	if (t == 1)
		return 	Coccus(x, y);
	if (t == 2)
		return 	Spirillum(x, y);
}
