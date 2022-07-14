
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main()
{
    printf("\n\n=== Bunch of Constants ===\n\n");

    const int moonLanding = 1969;
    const double speedOfLight = 299792458.;
    const double pi = 3.142;
    const unsigned hexaDead = 0xDEADU;
    const unsigned hexaSecret = 51966U;


    printf("Moon Landing | %10d\n", moonLanding);
    printf("Moon Landing | %010d\n", moonLanding);

    printf("Speed of light | %.0f\n", speedOfLight);    
    printf("Speed of Light | %.3e\n", speedOfLight);

    printf("Pi | %.2f\n", pi);
    printf("Pi | %+.1E\n", pi);

    printf("Hexa Dead | 0x%X\n", hexaDead);
    printf("Hexa Dead | %6u\n", hexaDead);

    printf("Hexa Secret | %x\n", hexaSecret);
    
    printf("\n\n=== MonsterMash ===\n\n");
    return EXIT_SUCCESS;
}

