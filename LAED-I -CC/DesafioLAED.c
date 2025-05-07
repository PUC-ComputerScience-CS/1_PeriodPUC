#include <stdio.h>
#include <locale.h>

int main()
{
    int i, n, num, maior=-9999999, cont=1;
    setlocale(LC_ALL,"Portuguese");

    printf("Leitura de números");
    printf("===================\n\n");

    printf("Digite quantos números você quer digitar: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) //for= loop, laço
    {
        printf("Digite um número=");
        scanf("%d", &num);

        if(num == maior)
        {
            cont++;
        }
        else if (num > maior)
        {
            maior = num;
            cont = 1; //ele reseta novamente, só o contador
        }
    }

    printf("\nO maior número é %d e foi digitado %d vezes.\n", maior, cont);

}
