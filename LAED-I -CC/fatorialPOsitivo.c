#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int n, i, f=1;

    printf("C�lculo de fatorial\n");
    printf("=====================\n\n");

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &n);
    i=n;

    if(n>0)
    {
        while(n>1)
        {
            f = f * n;
            n--;
        }
        printf("\n->O fatorial de %d �: %d", i, f);
    }
    else
    {
        printf("\n->C�lculo imposs�vel.");
    }
}
