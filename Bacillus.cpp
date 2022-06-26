#include "Bacillus.h" 
#include  <vector>

bool LifeForm::isSurvivor(vector<LifeForm> vectorOfBacterials)
{
	for (int i = 0; i < vectorOfBacterials.size(); i++) {
		LifeForm bacteria = vectorOfBacterials[i];

		if ((bacteria.name == 'C') && isNear(bacteria)) {
			return true;
		}
	}
	return false;
}