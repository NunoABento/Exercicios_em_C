#include<stdio.h>
main (){
    int resultado=0;
    for(int tabuada=1;tabuada<=10;tabuada++){
        for(int contador= 1;contador<=10;contador++){
            resultado=contador*tabuada;
            printf("%i X %i = %i\n",contador,tabuada,resultado);
        }
    printf("\n");
    }
}
