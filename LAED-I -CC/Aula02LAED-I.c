#include <stdio.h>
#define THR 18.5
/*
Comentario de multiplas linhas
Autor: Maria Clara
*/
//Codigo para calculo de imc
//------------------------------
//Escopo de declaracao das variaveis globais

int main(void) { //inicio do escopo da funcao principal

        char nome[256];
        unsigned int idade = 0;
        float imc = 0.0;
        float peso = 0.0;
        float altura = 0.0;

        //Entrada de dados
        printf("\nCalculo do IMC\n");
        printf("===============================\n\n");

        printf("Informe seu nome = ");
        scanf("%s", &nome); //Mudei a mascara de %255 para %s pois o meu Code.Blocks não tinha aceito o %255.

        printf("Informe sua idade[anos] = ");
        scanf("%u", &idade); //Utilizei a mascara %u
        getchar();

        printf("Informe seu peso[kg] = ");
        scanf("%f", &peso); //Utilizei a mascara %f
        getchar();

        printf("Informe sua altura [m] = ");
        scanf("%f", &altura);//Utilizei a mascara %f
        getchar();

        printf("\nCalculando o IMC...\n");

        printf("\nConsiderando o peso de %5.2fkg e a altura de %4.2fm para %s (%u anos)\n\n",peso, altura, nome, idade);
        imc = peso/(altura*altura);
        printf("\nO IMC eh %f\n",imc);

        if (imc < THR) {
        printf("Voce esta com deficit de massa corporal.\n"); //Mudei o que estava escrito para que ficasse mais claro e nos termos utilizados pelos medicos. Usei de base o site da Unimed.
        }
        else if(imc > THR + 8){
        printf("Voce esta em sobrepeso.");
        }
        else if(imc == THR){
        printf("Voce esta com massa corporal normal.");
        }

        printf("\nCalculo finalizado.\n\n");

//Coloquei mais de uma condiçao para que o código pudesse ficar mais completo e com mais opçoes para que o usuario tenha mais informações sobre sua condição fisica.
//E tambem para treinar as funções if e else.
return(0);
}
