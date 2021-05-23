#include<stdio.h>

int main()
{
    int nrs[10],c=0,moda=-1,reps=0;
    // pede ao utilizador os numeros a introduzir no array
    for(int i=0;i<10;i++)
    {
        printf("%i-Insira um numero inteiro:",i+1);
        scanf("%i",&nrs[i]);
    }
    //mostra na consola o array introduzido
    printf("numeros inseridos:\n");
    for(int i=0;i<10;i++)
    {
        printf("%i ",nrs[i]);
    }
    //procura no array o numero mais vezes repetido e conta o numero de repetições encontradas
    for(int i=0;i<9;i++)
    {
        for (int j=0+i;j<10;j++)
        {
            if(nrs[i]==nrs[j])
            {
                c++;
                if(c>reps)
                {
                    reps=c;
                    moda=nrs[i];
                }
            }
        }
        c=0;
    }
    //mostra no terminal o numero com mais repetições "moda"
    if(moda!=-1)
    {
        printf("\nNumero moda: %i",moda);
        printf("\nFoi inserido %i vezes",reps);
    }
    else printf("\nNao foi encontrado nenhum numero repetido");
    return 0;
}
