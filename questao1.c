#include<stdio.h>
#include<string.h>

int main(){
    int dd;

    printf("Informe o seu DD para ser informado de qual cidade esta falando: ");
    scanf("%d", &dd);

    switch (dd)
    {
        case 61: 
            printf("\nVoce e de Brasilia");
        break;
        case 71:
            printf("\nVoce e de Salvador");
        break;
        case 11:
            printf("\nVoce e de Sao Paulo.");
        break;
        case 21:
            printf("\nVoce e do Rio de Janeiro");
        break;
        case 32:
            printf("\nVoce e de Juiz de Fora");
        break;
        case 19:
            printf("\nVoce e de Campinas");
        break;
        case 27:
            printf("\nVoce e de Vitoria");
        break;
        case 31:
            printf("\nVoce e de Belo Horizonte");
        break;
        default:
            printf("\nNao e o DD desejado");
    }
    return 0;
}