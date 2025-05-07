#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <Windows.h>

int beh(int vet[], int tam); //ou: int beh(int *vet, int tam);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n[5] = {6,1,2,3,4};
    int mult3;
    mult3 = beh(n, 5);

    printf("\n>>A quantidade de multiplos de 3 eh: %d.\n\n", mult3);
}

int beh(int vet[], int tam)
{
    int i;
    int conta = 0;

    for(i=0; i < tam; i++)
    {
        if(vet[i]%3 == 0)
            conta++;
    }

    return conta;
}

/*main()
{
    int choice= 3, c, f;

    printf("Conversor de temperaturas.\n\n");
    printf("[1] Converter de Celsius para Fahrenheit: \n");
    printf("[2] Converter de Fahrenheit para Celsius: \n");
    printf("[3] Sair...\n");
    printf("\n-> ");
    scanf("%d", &choice);

do{
    switch (choice)
    {
    case 1:
        printf("Digite uma temperatura em Celsius:\n");
        scanf("%d", &c);
        f = (c * 9/5) + 32;
        printf("%d em fahrenheit e %d", c, f);
        break;
    case 2:
        printf("Digite uma temperatura em Fahrenheit:\n ");
        scanf("%d", &f);
        c = (f - 32) * 5/9;
        printf("%d em Celsius e %d", c, f);
    case 3:
        printf("\nSaindo...\n\n");
        Sleep(2000);
        printf("Fui :P\n");
        break;
    default:
        break;
    }
}while(choice);

}*/
