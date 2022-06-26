#include "Coccus.h"
#include  <vector>


bool LifeForm::isSurvivor(vector<LifeForm> vectorOfBacterials)
{
	int n = 0;
	for (int i = 0; i < vectorOfBacterials.size(); i++) {
		LifeForm bacteria = vectorOfBacterials[i];

		if ((bacteria.name != 'B') && isNear(bacteria) ) {
			n++;
			if (n >= 2)
			return true;
		}
	}
	return false;
}