#include <stdio.h>

main()
{
    int m[5][5];
    srand(time(NULL));

    printf("Imprimindo somentes os numeros IMPARES de uma Matriz aleatoria\n");
    printf("================================================================\n\n");

    for(int i=0; i < 5; i++)
    {
        for(int j=0; j<5; j++)
        {
            m[i][j] = rand() %50;
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    printf("\n>>Imprimindo valores impares na diagonal\n");
    //se i==j, está se referindo à diagonal, pode ser tb m[i][i];
    //pode-se usar somente um for para que  em vez de passar colunas e linhas diferentes ele iria só na linha e coluna de mesmo valor

    for(int i=0; i<5; i++)
    {
        if(m[i][i] %2 == 1)
            printf("\nNumero impar= %d\n", m[i][i]);
    }
}
