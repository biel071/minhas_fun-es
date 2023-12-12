#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 3

struct dados
{
    char nome[300];
    float nota[3];
    float media;
};

float resultado(float notas[])
{
    int i;
    float somanotas = 0, media;
    for (i = 0; i < tam; i++)
    {
        somanotas += notas[i];
    }
    media = somanotas / i;
    return media;
}

int main()
{
    struct dados alu;
    int i;
    

    printf("Digite o nome do aluno:");
    gets(alu.nome);


    for (i = 0; i < tam; i++)
    {
        printf("Digite a nota do aluno:");
        scanf("%f", &alu.nota[i]);
    }
    fflush(stdin);

resultado(alu.nota);

printf("O nome do aluno:%s\n", alu.nome);
printf("Media do aluno:%.2f",resultado(alu.nota));

return 0;

}
