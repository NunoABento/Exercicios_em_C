#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"");
    int nos=0,adv=0,jorn=0,dif=0,max=0;
    printf("Insira Pontos da nossa equipa ESPAÇO Pontos do aversário ESPAÇO Jornadas a disputar ENTER\n");
    scanf("%d %d %d",&nos,&adv,&jorn);
    max=jorn*3;
    dif=adv-nos;
    if(nos<adv && max>dif)
        printf(":-| ");
    else if(max+nos<=adv)
        printf(":-( ");
    else if(nos>adv && max>dif*-1)
        printf(":-) ");
    else
        printf(":-D ");

    return 0;
}
