#include <iostream>
#include <vector>
#include "PetriDish.h"
#include "LifeForm.h"
#include "Spirillum.h"
using namespace std;

int main() {
	PetriDish szalkapetriego;
	szalkapetriego.putRandomBacterials(100);
	while (true){
	szalkapetriego.print();
	szalkapetriego.timeLaps();
	szalkapetriego.putRandomNewBacterials(100);
	szalkapetriego.print();
	
	}
}