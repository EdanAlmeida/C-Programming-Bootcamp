#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("=== EVEN OR ODD ===\n\n");

    int a, b;
    int result;

    printf("Type an integer number: ");
    scanf("%d", &a);

    if (a <= 0){
        printf("Invalid Number!\n");
        return EXIT_FAILURE;
    }
    else if (a > 0){
        printf("Type other integer number: ");
        scanf("%d", &b);    
        if (b < 0){
            printf("Invalid Number!\n");
            return EXIT_FAILURE;
        }
        else if (b > 0){
            result = a % b;
            if (result == 0){
                printf("EVEN!\n");
            }
            else{
                printf("ODD!\n");
            }
        }
    }

    printf("\n\n=== Monster Mash ===\n\n");

    return 0;
}


