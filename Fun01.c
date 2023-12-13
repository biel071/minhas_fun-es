#include <stdio.h>
#include <stdlib.h>

//teste

float somar(float n1, float n2)
{
    float resultado;
    resultado = (n1 + n2) / 2;

    return resultado;
}
int main()
{
    float num1, num2;
    float media;
    printf("Digite o primeiro numero:");
    scanf("%f", &num1);

    printf("Digite o segundo numero:");
    scanf("%f", &num2);

    media = somar (num1, num2);

    printf("Primeiro numero:%.1f \n", num1);
    printf("Segundo numero:%.1f \n", num2);
    printf("Resultado da media: %.1f \n", media);
    return 0;
}
