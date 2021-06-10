#include<stdio.h>
#include<locale.h>
#include<string.h>

char no_spaces(char *str){
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '){
            for(int j=i;j<strlen(str);j++){
                str[j]=str[j+1];
            }
        }
    }
    return *str;
}
void hideCardNr(char *nr,int dim){
    int aux=dim;
    for(int i=0;i<dim;i++){
            if(i<dim-4) printf("*");
            else printf("%c",nr[i]);
    }
}
int main(){
    setlocale(LC_ALL,"");
    char ncc[30];
    puts("Insira o nr do cartão de crédito");
    gets(ncc);
    ncc[30]= no_spaces(ncc);
    hideCardNr(ncc,strlen(ncc));
    return 0;
}
