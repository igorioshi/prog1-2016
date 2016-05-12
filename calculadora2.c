#include <stdio.h>
#include <math.h>
int main()
{
    int opc, continuar;
    int num1;
    float res,m;
    
    do
    {
        //desenha o menu
        printf("\n Escolha uma operaçao");
        printf("\n 1- raiz quadrada");
        printf("\n 2- potencia de 2");
       
        printf("\nOpçao");
        scanf("%d", &opc);
        
        //ler 1 numeros
        printf("\nEntre com num1:");
        scanf("%d", &num1);
        
        //seleciona a operaçao
        switch(opc)
        {
            case 1: //raiz quadrada
                res = sqrt(num1);
                printf("\n Raiz quadrada de %d = %.2f", num1, res);
                break;
                
            case 2: //potencia de 2
                res = pow(num1, 2);
                printf("\nO quadrado de %d = %.2f", num1, res);
                break;
        }
        
        //continuar no loop
        printf("\nDeseja continuar(1-s/2-n)?");
        scanf("%d", &continuar);
            
        
                
        }while(continuar == 1);
    
    
    
    return 0;
}