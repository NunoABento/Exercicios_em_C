#include<stdio.h>

int main()
{
    int nrs[10],aux,trocado=1;
    // pede números e introduz no array
    for(int i=0;i<10;i++)
    {
        printf("%i - insira um numero inteiro: ",i+1);
        scanf("%i",&nrs[i]);
    }
    //mostra na consola o array introduzido
    printf("Vetor introduzido:\n");
    for(int i=0;i<10;i++)
    {
        printf("%i ",nrs[i]);
    }
    //faz buble sorting até não haver mais trocas
    while(trocado==1)
    {
        trocado=0;
        for(int i=0;i<9;i++)
        {
            if(nrs[i]>nrs[i+1])
            {
                aux=nrs[i];
                nrs[i]=nrs[i+1];
                nrs[i+1]=aux;
                trocado=1;
            }
        }
    }
    // mostra na consola o array já organizado
    printf("\nVetor por ordem crescente:\n");
    for(int i=0;i<10;i++)
    {
        printf("%i ",nrs[i]);
    }
    return 0;
}
