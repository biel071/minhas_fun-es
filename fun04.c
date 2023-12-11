#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3

float cal(float notas[])
{
    int i;
    float somanotas = 0, media;
    for (i = 0; i < TAM; i++)
    {
        somanotas += notas[i];
    }
    media = somanotas / i;
    return media;
}

char*verificando(float media){
char resultado[200];
if (media >= 7)
{
    strcpy (resultado,"aprovado");
}else{
    strcpy (resultado,"reprovado");
}
return resultado;

}

int main()
{
    float nota[TAM];
    float media;
    int i;
    for (i = 0; i < TAM; i++)
    {
        printf("Digite sua nota:");
        scanf("%f", &nota[i]);
    }
    
media = cal(nota);
printf ("Media: %.2f \n", media);
printf("Resultado:%s", verificando(media));

    return 0;
}