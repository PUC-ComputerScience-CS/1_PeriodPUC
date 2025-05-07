#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ar: nome, idade, sagueTipo, i p/ o la�o

struct doador
{
    char nome[50], sangueTipo[4];
    int idade;
};
/*ou: (2)
  typedef struct
  {
      char nome[50];
      int idade;
      char sangueTipo[4];
  }pessoa; */

main()
{
    struct doador lista[5]; //(2)- pessoa lista[5];
    int i, controle = 0;

    printf("Doador Universal Teste\n");
    printf("================================\n\n");

    for(i=0; i<5; i++)
    {
        printf("Nome:");
        scanf("%s", &lista[i].nome);
        //ou: gets(lista[i].nome);

        printf("Idade:");
        scanf("%d", &lista[i].idade);

        printf("Tipo Sanguineo:");
        scanf("%s", &lista[i].sangueTipo);
        //ou: gets(lista[i].sangueTipo);
        //* printf("Digite o tipo sanguineo %d:", i+1) //i+1-> 1,2,3,4,5
        printf("\n-----------------------\n");
    }

    for(i=0; i<5; i++)
    {
        if(strcmp(lista[i].sangueTipo, "O-") == 0 && (lista[i].idade) >= 14)
        {
            printf("\n>>Parabens! Voce, %s, � um(a) doador(a) universal!!!\n\n", lista[i].nome);
            controle = 1;
        }
    }

    if(controle == 0)
    {
        printf(">>Nao ha nenhum doador universal neste registro...\n\n");
    }
}
