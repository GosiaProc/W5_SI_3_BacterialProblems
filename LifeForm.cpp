#include "LifeForm.h"
#include "PetriDish.h"
#include "Spirillum.h"
#include "Bacillus.h"
#include "Coccus.h"


bool LifeForm::isNear(LifeForm bacteria)
{
    int x1, y1, x2, y2;
    
    x1 = x;
    y1 = y;
    x2 = bacteria.x;
    y2 = bacteria.y;

    return NEARBY * NEARBY >= (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

}