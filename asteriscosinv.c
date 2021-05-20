#include <stdio.h>
int main(){
    int quant=5,Q=1;
    for(int linha=0;linha<5;linha++){
            for(int espa=0;espa<quant;espa++){
                printf(" ");
            }
            for(int aster=0;aster<Q;aster++){
                printf("X");
            }
    quant--;
    Q++;
    printf("\n");
    }

}
