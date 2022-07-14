
#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    THRUST_NONE = 0, 
    THRUST_LOW = 5,
    THRUST_MEDIUM = 9, 
    THRUST_HIGH = 12,
    THRUST_MAXIMUM = 20,  
}SpaceshipThrust;

int main()
{
    printf("\n\n=== Spaceship Thrust ===\n\n");

    SpaceshipThrust thrust;

    thrust = THRUST_NONE;
    printf("Spaceship is ready to go, now thrust is: %d\n", thrust);

    thrust = THRUST_MAXIMUM;
    printf("Spaceship is taking off into the sky, now thrust is: %d\n", thrust);

    thrust = THRUST_MEDIUM;
    printf("Spaceship is entering the ionosphere, now thrust is: %d\n", thrust);

    thrust = THRUST_LOW;
    printf("Spaceship is traveling to deep space, now thrust is: %d\n\n", thrust);

    printf("Bye bye Spaceship! \n");
    
    printf("\n\n=== MonsterMash ===\n\n");
    return EXIT_SUCCESS;
}

