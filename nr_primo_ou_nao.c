#include<stdio.h>

int main()
{
    int nr,cont=0;
    printf("Introduza um numero inteiro maior do que zero: ");
    scanf("%i",&nr);
    if(nr>0)
    {
        for(int i=2;i<=nr/2;i++)
        {
            if(nr%i==0)
            {
                cont++;
            }
        }
        if(cont<1)
            {
                printf("\nO numero %i e' primo.",nr);
            }
        else
            {
            printf("\nO numero %i nao e' primo.", nr);
            }
    }
    else
    {
        printf("\nO numero %i nao e' primo.",nr);
    }
    return 0;
}
