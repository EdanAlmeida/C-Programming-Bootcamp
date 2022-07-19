#include <stdio.h>
#include <stdlib.h>


int main(){
    double largura;
    double comprimento;
    double preco ;
    double area;
    double preco_terreno;

    printf("=== CALCULADORA DE TERRENOS ===\n\n");
    printf("Informe a largura do terreno em metros: ");
    scanf("%lf", &largura);

    printf("Informe o comprimento do terreno em metros: ");
    scanf("%lf", &comprimento);

    printf("Informe o preco do terreno em R$: ");
    scanf("%lf", &preco);

    area = largura * comprimento;
    preco_terreno = area * preco;

    printf("\n\n AREA EM M2: %2.2f\n", area);
    printf("PRECO DO TERRENO: %2.2f\n", preco_terreno);

    printf("\n\n=== Monster Mash ===\n\n");

    return 0;

}

