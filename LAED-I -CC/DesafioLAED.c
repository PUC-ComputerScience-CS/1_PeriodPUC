#include <stdio.h>
#include <locale.h>

int main()
{
    int i, n, num, maior=-9999999, cont=1;
    setlocale(LC_ALL,"Portuguese");

    printf("Leitura de n�meros");
    printf("===================\n\n");

    printf("Digite quantos n�meros voc� quer digitar: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) //for= loop, la�o
    {
        printf("Digite um n�mero=");
        scanf("%d", &num);

        if(num == maior)
        {
            cont++;
        }
        else if (num > maior)
        {
            maior = num;
            cont = 1; //ele reseta novamente, s� o contador
        }
    }

    printf("\nO maior n�mero � %d e foi digitado %d vezes.\n", maior, cont);

}
