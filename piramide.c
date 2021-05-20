#include<stdio.h>
int main(){
    int quant=3,Q=1;
    for(int linha=0;linha<4;linha++){
        for(int espa=1;espa<=quant;espa++){
            printf(" ");
        }
        for(int aster=1;aster<=Q;aster++){
            printf("X");
        }
    Q+=2;
    quant--;
    printf("\n");
    }
}
