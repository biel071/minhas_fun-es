#include <stdio.h>
#include <stdlib.h>

int somar (int n1, int n2) {
int resultado;
resultado =n1 + n2;

return resultado;
}
void cabecalho (){
    printf ("\n======================\n");
    printf ("\tSENAI");
    printf ("\n======================\n");
}
int main()
{
    int num1;
    int num2;
    int soma;

    printf ("\n======================\n");
    printf ("\tSENAI");
    printf ("\n======================\n");
    printf ("Digite o primeiro numero: ");
    scanf ("%d",&num1);
    printf ("Digite o segundo numero: ");
    scanf ("%d",&num2);

    soma = somar  (num1, num2);
    system ("cls||clear");
    cabecalho();
    printf ("Primeiro numero:%d \n", num1);
    printf ("Segundo numero:%d \n", num2);
    printf("Resultado da soma: %d \n", soma);

    return 0;
}