#include <stdlib.h>
#include <stdio.h>


int main(){
    printf("\n\n=== SPHERE ===\n\n");
    
    const double pi = 3.14;
    double radius;

    printf("Type the radius (double): ");
    scanf("%lf", &radius);

    double surface = 4 * pi * radius * radius;
    double volume = 4.0 / 3 * pi * radius * radius * radius; //4.0 to promte the number 3 for a float pointing.

    printf("Surface : %.2f\n", surface);
    printf("Volume : %.2f\n", volume);
    printf("\n");

    printf("Surface : %.3e\n", surface);
    printf("Volume : %.3e\n", volume);
    printf("\n");


    printf("\n\n=== Monster Mash ===\n\n");
    return EXIT_SUCCESS;
}