#ifndef RIOT_TESTING
#define RIOT_TESTING

#include "riotExec.h"
#include "riotMap.h"
#include "riotUnits.h"
#include "riotUI.h"

#define TRIALS 10

void printInmates(struct UnitList *list);
void printGuards(struct UnitList *list);
void unitsTest(void);
void mapsTest(char* loadDir);

#endif //RIOT_TESTING