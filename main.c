#include <stdio.h>
#include <stdlib.h>

#include "HugeFloatOperator.h"
#include "HugeIntOperator.h"
#include "IHMHugeNumber/ScanHugeNumber.h"
#include "IHMHugeNumber/ShowHugeNumber.h"


int main (void) {
    HugeUnsignedInt* hugeNumber = createHugeUnsignedIntFromString ("123456789012345678901234567890");
    printHugeUnsignedInt (hugeNumber);
    hugeNumber = createHugeUnsignedIntFromString ("0000000123456789012345678901234567890");
    printHugeUnsignedInt (hugeNumber);
    printf("test");
    return 0;
}
