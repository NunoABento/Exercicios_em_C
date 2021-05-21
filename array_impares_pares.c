#include<stdio.h>

int main()
{
    // pede numeros inteiros e introduz no array
    int nrs[10],aux,trocado=1;
    for(int i=0;i<10;i++)
    {
        printf("%i -insira um numero inteiro: ",i+1);
        scanf("%i",&nrs[i]);
    }
    //mostra na consola o array introduzido
        printf("Vetor introduzido:\n");
    for(int i=0;i<10;i++)
    {
        printf("%i ",nrs[i]);
    }
    //troca se necessario os impares pelos pares
    while(trocado==1)
    {
        trocado=0;
        for(int i=0;i<9;i++)
        {
            if(nrs[i]%2==0)
            {
                if(nrs[i+1]%2!=0)
                {
                    aux=nrs[i];
                    nrs[i]=nrs[i+1];
                    nrs[i+1]=aux;
                    trocado=1;
                }
            }
        }
    }
    // mostra no terminal o array já organizado com os impares à esquerda e os pares à direita
    printf("\n\nVetor organizado impares a esquerda pares a direita\n");
    for(int i=0;i<10;i++)
    {
        printf("%i ",nrs[i]);
    }
    return 0;
}
