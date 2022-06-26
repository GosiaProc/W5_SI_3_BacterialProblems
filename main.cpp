#include <iostream>
#include <vector>
#include "PetriDish.h"
#include "LifeForm.h"
#include "Spirillum.h"
using namespace std;

int main() {
	PetriDish szalkapetriego;
	szalkapetriego.putRandomBacterials(60);
	szalkapetriego.print();
}