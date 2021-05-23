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
    //soma as multiplica��es correspondentes a cada digito
    for(int i=1;i<10;i++)
    {
        mult=dig[i]*z;
        soma=soma+mult;
        z++;
    }//verifica se o nif � v�lido
    resto=soma%11;
    if(resto==0 || resto==1)nrc=0;
    else nrc=11-resto;
    if(nrc==dig[0])
    {
        printf("NIF v�lido\n");
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
                    case 5:printf("Pessoa singular, cidad�o n�o residente.\n");
                        break;
                    default :
                        break;
                }
            case 5:printf("Pessoa coletiva.\n");
                break;
            case 6:printf("Organismo da Administra��o P�blica.\n");
                break;
            case 7:
                switch(dig[7])
                {
                case 0:
                case 4:
                case 5:printf("Heran�a indivisa.\n");
                    break;
                case 1:printf("N�o residente coletivo.\n");
                    break;
                case 2:printf("Fundo de investimento.\n");
                    break;
                case 7:printf("Atribui��o oficiosa de NIF de sujeito passivo.\n");
                    break;
                case 8:printf("Atribui��o oficiosa a n�o residente abrangido pelo processo VAT REFUND.\n");
                    break;
                case 9:printf("Regime excessional - Expo 98.\n");
                default :
                    break;
                }
            case 8:printf("Empres�rio em nome individual - actualmente obsoleto, j� n�o � v�lido.\n");
                break;
            case 9:
                switch(dig[7])
                {
                    case 0:
                    case 1:printf("Condom�nios, Sociedades irregulares, Heran�as indivisas cujo autor da sucess�o era empres�rio individual.\n");
                    default:printf("Provis�rio.\n");
                }
                break;

            default:printf("NIF inv�lido\n");
        }
    }
    else printf("NIF inv�lido\n");
    return 0;
}
