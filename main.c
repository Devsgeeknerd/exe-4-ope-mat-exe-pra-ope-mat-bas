#include <stdio.h>
#include <stdlib.h>

void main()
{
    float base;
    float area;
    float altura;

    printf("Digite o valor da base de um retângulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura de um retângulo: ");
    scanf("%f", &altura);

    area = base * altura;

    // "0.2" limita as casas decimais em duas casas.
    printf("A area de um retângulo e: %0.2f", area);
}
