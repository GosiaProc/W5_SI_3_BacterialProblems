#include <iostream>
#include "PetriDish.h"
#include <vector>
#include "LifeForm.h"
#include "Spirillum.h"
#include "Bacillus.h"
#include "Coccus.h"
#include <ctime>


using namespace std;

vector<vector<char>> PetriDish::createTableWithDots() {

	vector<vector<char>> table;
	for (int j = 0; j < ysizeDish; j++) {
		vector<char> row;
		for (int i = 0; i < xsizeDish; i++)
			row.push_back('.');
		table.push_back(row);
	}
	return table;
}

vector<vector<char>> PetriDish::createTableWithBacterials()
{
	vector<vector<char>> table = createTableWithDots();
	for (int i = 0; i < vectorOfBacterials.size(); i++) {
		LifeForm object = vectorOfBacterials[i];
		table[object.y][object.x] = object.name;
	}
	return table;
}

void PetriDish::print() {
	vector<vector<char>> table = createTableWithBacterials();
	for (int y = 0; y < ysizeDish; y++) {
		for (int x = 0; x < xsizeDish; x++) {
			cout << table[y][x];
		}
		cout << endl;
	}
}

void PetriDish::putRandomBacterials(int numberOfBacterials)
{
	for (int i = 0; i < numberOfBacterials; i++) {
		LifeForm bacteria = createRandomBacteria();
		vectorOfBacterials.push_back(bacteria);
	}
}

void PetriDish::putBacterials()
{
	// todo genarate random
	Spirillum s1(3, 3);
	vectorOfBacterials.push_back(s1);
	Spirillum s2(3, 6);
	vectorOfBacterials.push_back(s2);
	Spirillum s3(3, 7);
	vectorOfBacterials.push_back(s3);
	Spirillum s4(3, 10);
	vectorOfBacterials.push_back(s4);
	Spirillum s5(3, 13);
	vectorOfBacterials.push_back(s5);
	Spirillum s6(3, 29);
	vectorOfBacterials.push_back(s6);
}

void PetriDish::timeLaps()
{

}

LifeForm PetriDish::createRandomBacteria() {
	int x, y, type;
	srand((unsigned)time(0));
	x = rand() % xsizeDish;
	y = rand() % ysizeDish;
	type = rand() % 3;

	if (type == 0)
		return 	Bacillus(x, y);
	if (type == 1)
		return 	Coccus(x, y);
	if (type == 2)
		return 	Spirillum(x, y);
}
