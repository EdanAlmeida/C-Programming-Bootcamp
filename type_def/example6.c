
#include <stdio.h>
#include <stdlib.h>

//typedef existing_name alias_name;

typedef enum
{
    TEA,
    COFFEE,
    JUICE,
    BEER,
}Menu;

int main()
{
    Menu mario = COFFEE;
    Menu andrea = BEER;

    printf("Mario: %d\n", mario);
    printf("Andrea: %d\n", andrea);
    
    printf("\n\n=== MonsterMash ===\n\n");
    return EXIT_SUCCESS;
}

