#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("=== RETANGULO ===\n\n");
    
    double base;
    double altura;
    double area;
    double perimetro;
    double diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%lf", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = (base * 2) + (altura * 2);
    ///diagonal = sqrt(base * base + altura * altura);

    printf("AREA: %.4lf\n", area);
    printf("PERIMETRO: %.4lf\n", perimetro);
    ///printf("DIAGONAL: %.4lf\n", diagonal);

    return 0;
}


