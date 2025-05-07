#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//linha (int),coluna(int), soma(int),maior(int), nome matriz(float), i e j p/ la�o;

main()
{
    int n,m, i, j, iMaior; //iMaior= Indice Maior

    printf("Matriz de NxM, sua soma e maior numero da soma\n");
    printf("================================================\n\n");

    printf(">>Digite o numero de linhas[n]=");
    scanf("%d", &n);

    printf(">>Digite o numero de colunas[m]=");
    scanf("%d", &m);

    float soma[n], p[n][m], maior;

    printf("\n-->Gerando a matriz...\n");

    for (i=0; i < n; i++)
    {
        for(j=0; j < m; j++)
        {
            printf(">>Digite os numeros desejados para a matriz=");
            scanf("%f", &p[i][j]);
            //ou: printf("Digite a posicao [%d][%d]", i,j);- scanf("%f", &p[i][j]);
        }
        soma[i] = 0; //p/ tirar lixo de mem�ria de soma
    }

    printf("\n-->Montando a matriz...\n");

    for (i=0; i < n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%4.0f%\t", p[i][j]); //\t= da um salto tabular (tab), ele pula linha da matriz
        }
        printf("\n");
    }

    for (i=0; i < n; i++)
    {
        for(j=0; j<m; j++)
        {
            soma[i] += p[i][j];
        }
    }

    maior = soma[0];
    iMaior = 0;
    for(i=1; i<n; i++)
    {
        if(maior < soma[i])
        {
            maior = soma[i];
            iMaior= i + 1;
        }
    }

    printf("\n>>A linha com maior valor eh %d, valendo %2.0f\n", iMaior, maior);

}
