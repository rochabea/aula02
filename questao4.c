#include<stdio.h>
#include<string.h>

int main(){
    
    float n1, n2, n3, n4, media;

    printf("Iremos calcular a nota das quatro provas do semestre.\n");
    printf("\nInforme o valor da primeira prova: ");
    scanf("%f", &n1);
    printf("\nInforme o valor da segunda prova: ");
    scanf("%f", &n2);
    printf("\nInforme o valor da terceira prova: ");
    scanf("%f", &n3);
    printf("\nInforme o valor da quarta prova: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4)/4;
    printf("O valor da media foi %.2f", media);

    if (media>6.9)
    {
        printf("\nAprovad@!");
    }else{
        if (media>3 && media<7)
        {
            printf("\nRecuperacao");
        }else{
            printf("\nReprovado");
        }
        
    }
    return 0;
}