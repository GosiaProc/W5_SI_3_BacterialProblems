#include "Spirillum.h"
#include  <vector>

bool LifeForm::isSurvivor(vector<LifeForm> vectorOfBacterials)
{
	for (int i = 0; i < vectorOfBacterials.size(); i++) {
		LifeForm bacteria = vectorOfBacterials[i];

		if ((bacteria.name == 'B') && isNear(bacteria)) {
			return false;
		}
	}
	return true;
}