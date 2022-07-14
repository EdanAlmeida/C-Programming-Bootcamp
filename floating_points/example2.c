
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*1.23456789*/
    double decimalDigits = 1.23456789;

    /*7.801 x 10^9*/
    double worldPopulation = 7.801E9;
    
    /*6.626 x 10^-34*/
    double plankConstant = 6.626E-34;

    printf("%12.1f | 1 decimal digit\n", decimalDigits);
    printf("%12.3f | 3 decimal digits\n", decimalDigits);
    printf("%12.1f | 1 decimal digit\n", worldPopulation);
    printf("%12.1e | scientific notation\n", worldPopulation);
    printf("%12.3e | scientific notation\n", worldPopulation);
    printf("%12.1E | plank constant\n", plankConstant);
    printf("%12.3E | plank constant\n", plankConstant);


    printf("\n\n=== MonsterMash ===\n\n");
    return EXIT_SUCCESS;
}

