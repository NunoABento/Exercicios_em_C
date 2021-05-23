#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int aux=0,matriz[][5]=
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    //percorrer a matriz e transpôr as linhas para colunas
    for(int l=0;l<5;l++)
    {
        for(int c=l;c<5;c++)
        {
            aux=matriz[l][c];
            matriz[l][c]=matriz[c][l];
            matriz[c][l]=aux;
        }
    }
    for(int l=0;l<5;l++)
    {
        for(int c=0;c<5;c++)
        {
            printf("%d ",matriz[l][c]);
        }
    printf("\n");
    }
    return 0;
}
