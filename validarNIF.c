#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int nif,dig[9],soma=0,resto=0,mult=0,z=2,nrc;
    //pede o NIF ao utilizador
    printf("Insira o NIF: ");
    scanf("%i",&nif);
    //separa o numero em digitos
    for(int i=0;i<9;i++)
    {
        dig[i]=nif%10;
        nif/=10;
    }
    //soma as multiplicações correspondentes a cada digito
    for(int i=1;i<10;i++)
    {
        mult=dig[i]*z;
        soma=soma+mult;
        z++;
    }//verifica se o nif é válido
    resto=soma%11;
    if(resto==0 || resto==1)nrc=0;
    else nrc=11-resto;
    if(nrc==dig[0])
    {
        printf("NIF válido\n");
        //identifica o tipo de NIF
        switch(dig[8])
        {
            case 1:
            case 2:
            case 3:printf("Pessoa singular.\n");
                break;
            case 4:
                switch(dig[7])
                {
                    case 5:printf("Pessoa singular, cidadão não residente.\n");
                        break;
                    default :
                        break;
                }
            case 5:printf("Pessoa coletiva.\n");
                break;
            case 6:printf("Organismo da Administração Pública.\n");
                break;
            case 7:
                switch(dig[7])
                {
                case 0:
                case 4:
                case 5:printf("Herança indivisa.\n");
                    break;
                case 1:printf("Não residente coletivo.\n");
                    break;
                case 2:printf("Fundo de investimento.\n");
                    break;
                case 7:printf("Atribuição oficiosa de NIF de sujeito passivo.\n");
                    break;
                case 8:printf("Atribuição oficiosa a não residente abrangido pelo processo VAT REFUND.\n");
                    break;
                case 9:printf("Regime excessional - Expo 98.\n");
                default :
                    break;
                }
            case 8:printf("Empresário em nome individual - actualmente obsoleto, já não é válido.\n");
                break;
            case 9:
                switch(dig[7])
                {
                    case 0:
                    case 1:printf("Condomínios, Sociedades irregulares, Heranças indivisas cujo autor da sucessão era empresário individual.\n");
                    default:printf("Provisório.\n");
                }
                break;

            default:printf("NIF inválido\n");
        }
    }
    else printf("NIF inválido\n");
    return 0;
}
