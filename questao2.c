#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    //if emprestimo > salario -> 20% + concedido 
    float salario;
    float emprestimo;
    float calculo;
      

    printf("Informe o valor do seu salario: ");
    scanf("%f", &salario);
    printf("\nInforme o valor do emprestimo desejado: ");
    scanf("%f", &emprestimo);
    
    calculo = salario + (salario*20)/100;

    if (salario < calculo)
    {
        printf("\nEmprestimo concedido");
    }
    else{
        printf("\nEmprestimo negado");
    }
    

}