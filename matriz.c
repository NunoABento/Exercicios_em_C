#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int diag1=1,diag2=1,matriz[][5]=
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    //percorrer a matriz linhas e colunas e realizar as multiplica��es das diagonais
    for(int l=0;l<5;l++)
    {
        for(int c=0;c<5;c++)
        {
            if(l==c)
            {
                diag1=diag1*matriz[l][c];
                printf("%d ",matriz[l][c]);
            }//espa�amento para apresentar os numeros a multiplicar na sua posi��o na matriz
            else printf(" ");
        }
    printf("\n");
    }
    printf("A multiplica��o dos valores da diagonal da direita para a esquerda �: %d\n",diag1);
    for(int l=0;l<5;l++)
    {
        for(int c=0;c<5;c++)
        {
            if(l+c==4)
            {
                diag2=diag2*matriz[l][c];
                printf("%d ",matriz[l][c]);
            }//espa�amento para apresentar os numeros a multiplicar na sua posi��o na matriz
            else printf(" ");
        }
    printf("\n");
    }
    printf("A multiplica��o dos valores da diagonal da esquerda para a direita �: %d\n",diag2);
    return 0;
}
