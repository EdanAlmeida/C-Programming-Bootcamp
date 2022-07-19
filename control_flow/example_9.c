#include <stdio.h>
#include <stdlib.h>

int main(){
    char operator;
    double operand_a, operand_b, result;

    printf("Enter the operator: ");
    scanf("%c", &operator);

    printf("Enter the first operand: ");
    scanf("%lf", &operand_a);

    printf("Enter the second operand: ");
    scanf("%lf", &operand_b);
    printf("\n");

    int error = 0;

    switch (operator)
    {
        case '+':
            result = operand_a + operand_b;
            break;
        case '-':
            result = operand_a - operand_b;
            break;
        case '*':
            result = operand_a * operand_b;
            break;
        case '/':
            result = operand_a / operand_b;
            break;
        default:
            error = 1;
            break;
    }

    if (error)
    {
        printf("Error: unknown operator!\n");
    }
    else
    {
        printf("%.1f %c %.1f = %f\n", operand_a, operator, operand_b, result);
    }

    printf("\n\n=== Monster Mash ===\n\n");
    return EXIT_SUCCESS;
}
