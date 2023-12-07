#include <stdio.h>
#include <stdlib.h>

int somando (int n1, int n2){
    int somar;
    somar = n1 + n2;
    
    return somar;
}
int multiplicando (int n1, int n2){
    int multi;
    multi = n1 * n2;
    
    return multi;
}
int dividindo (int n1, int n2){
    int divisao;
    divisao = n1 / n2;
    
    return divisao;
}
int subtraindo (int n1, int n2){
    int sub;
    sub = n1 - n2;
    
    return sub;
}

int main (){

int num1, num2;

printf ("Digite um numero:");
scanf("%d",&num1);
printf ("Digite um numero:");
scanf("%d",&num2);

somando(num1,num2);
multiplicando(num1,num2);
dividindo(num1,num2);
subtraindo(num1,num2);

printf ("Resultado da soma:%d\n", somando(num1,num2));
printf ("Resultado da multiplicacao:%d\n", multiplicando(num1,num2));
printf ("Resultado da divisao:%d\n", dividindo(num1,num2));
printf ("Resultado da subtracao:%d\n", subtraindo(num1,num2));


    return 0;
}