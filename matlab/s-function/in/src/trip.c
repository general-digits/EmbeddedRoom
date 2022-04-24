#include "trip.h"

TRIP__tstData TRIP_vCalculateAlgo(char *u8calc, char u8a, char u8b)
{
    TRIP__tstData TRIP__stData = {0};
    
    *u8calc = u8a + u8b;
    TRIP__stData.sum = *u8calc;
    
    *u8calc = u8a * u8b;
    TRIP__stData.mul = *u8calc;
   
    return TRIP__stData;
}
