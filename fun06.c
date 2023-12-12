#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float medidas (float altura, float peso){
    return  peso / (altura * altura);

}

char* exibir (float resultado){

char imc[200];
    if (resultado <= 18.5){
        strcpy (imc,"Abaixo do peso, consulte um nutricionista.");}
    
        else if (resultado > 18.5 && resultado <24.9)
        {strcpy (imc,"Peso normal, mantenha habitos saudaveis.");  }
    
        else if (resultado > 25 && resultado <29.9)
       { strcpy (imc,"sobrepeso, considere dietas saudaveis.");  }
     
     else if (resultado > 30 && resultado <34.9)
       { strcpy (imc,"obesidade grau 1.");  }
     
     else if (resultado > 35 && resultado <39.9){
        strcpy (imc,"obesidade grau 2.");  }
    
     else if  (resultado >= 40){
        strcpy (imc,"obesidade grau3, procure ajuda imediatamente.");  }
        
        
    return imc;
}

int main (){
float peso; 
float altura;
float imc1;

printf ("Digite seu peso:");
scanf ("%f", &peso);

printf ("Digite sua altura:");
scanf ("%f", &altura);

imc1= medidas(altura, peso);
printf ("Resultado:\n %.2f\n", medidas(altura, peso));
printf ("Resultado do exame:\n%s",exibir (imc1));

    return 0; 
}

