#include <stdio.h>
                //CALCULADORA COM "if"
int main()
{
    int adicao, sub, mult, divi;
    int num1, num2;
    int resp, resp2;
    
    
    
    do
    {   
        //entra com um num
        printf ("\nEntre com um numero:");
        scanf("%d", &num1);
        
        //entra com outro num
        printf("\n Entre com outro numero:");
        scanf("%d", &num2);
        
        //menu
        printf("\n Escolha uma operaçao");
        printf("\n 1- adiçao");
        printf("\n 2- subtraçao");
        printf("\n 3- multiplicaçao");
        printf("\n 4- divisao");
        
        //guarda a opçao
        scanf("%d", &resp);
        
        //add
        if (resp == 1){
            adicao = num1 + num2;
        printf("\n %d + %d = %d", num1, num2, adicao);
        
        }
            //sub
             else if (resp == 2){
                 sub = num1 - num2;
            printf("\n %d - %d = %d", num1, num2, sub);
            
            }
            //mult
            else if (resp == 3){
                mult = num1 * num2;
            printf("\n %d * %d = %d", num1, num2, mult);
            
            }
            //divi
            else if(resp == 4){
                divi = num1 % num2;
            printf("\n %d / %d = %d", num1, num2, divi);
            }
            
            
        //continuar loop?
         printf("\nDesesa continuar? (1-sim/2-nao)");
        scanf("%d", &resp2);
        
      //se escolher 1 volta pro loop, se n sai  
    }while(resp2 == 1);
    
    
    return 0;
}