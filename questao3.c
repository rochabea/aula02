#include<stdio.h>
#include<string.h>

int main(){

    int n1;
    int n2;
    int n3;

    printf("Iremos analisar tres valores e informar qual e o maior valor e o menor tambem");
    printf("\nInforme o primeiro valor: ");
    scanf("%d", &n1);
    printf("\nInforme o segundo valor: ");
    scanf("%d", &n2);
    printf("\nInforme o terceiro valor: ");
    scanf("%d", &n3);

    fflush(stdin);

    if (n1>n2 && n1>n3 && n3<n1 && n3<n2)
    {
        printf("\nO maior valor e %d e o menor valor %d", n1, n3);
    }else{
        if (n2>n1 && n2>n3 && n1<n2 && n1<n3)
        {
             printf("\nO maior valor e %d e o menor valor e %d", n2, n1);
             fflush(stdin);
        }else{
            if (n3>n1 && n3>n2 && n2<n1 && n2<n3)
            {
                printf("\nO maior valor e %d e o menor valor e %d", n3, n2);
                fflush(stdin);
            }else{
                if (n1>n3 && n1>n2 && n2<n1 && n2<n3)
                {
                    printf("\nO maior valor e %d e o menor valor e %d", n1, n2);
                    fflush(stdin);
                }else{
                    if (n2>n1 && n2>n3 && n3<n1 && n3<n2)
                    {
                        printf("\nO maior valor e %d e o menor valor e %d", n2, n3);
                        fflush(stdin);
                    }else{
                        if (n3>n2 && n3>n1 && n3>n1 && n1<n2 && n1<n3)
                        {
                            printf("\nO maior valor e %d e o menor valor e %d", n3, n1);
                            fflush(stdin);
                        }else{
                            printf("\nOs valores sao iguais");
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
    }
    
}