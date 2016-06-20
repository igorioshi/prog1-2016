#include <stdio.h>

//Funçao menu
int menu()//para n ter parametro, n precisa de entrada p ler
{
   int opc;
     
    //Escolha uma opçao
        printf("\nEscolha uma operação: ");
        printf("\n 1- Imprimir Fibonacci");
        printf("\n 2- Calcular fatorial");
        printf("\n 3- Calcular sigma");
        printf("\n-------------------------\n");
        
        //guarda a opçao
        scanf("%d", &opc);
        
        return opc;
}

//funçao fibonacci
void fibonacci(int fibo)
{
    int num1=0, num2=1, aux=1, i, n;
    
    
    for(i=0; i<fibo; i++)
    {
        printf("%d-", num1);
        
        aux = num1;
        num1 = num2;
        num2 = aux + num2;
    }
    
}

int fatorial(int num)//num = parametro
{
        int fat;
        
        for(fat=1; num>=1; num--)//ex: fat=5, fat=5*4(num-- = 5-1), fat=20*3.....
            fat = fat * num;
            
        return fat;// tem q retornar ao calculo
        
}

int sigma(int num)
{
    int soma;
    
    for(soma=0; num>=1; num--)//começa em zero pq se nao soma o num 1
    
    soma = soma + num;
    
    return soma;
}






int main()
{
     int num1, opc, result;
     char continuar;
     
     do
     {
     opc = menu();
        
        printf("\n***********************************");
        printf("\nEntre com um numero inteiro: ");
        scanf("%d", &num1);
        
        if(opc == 1)
        {
            fibonacci(num1);
           
            
        }
        else if(opc == 2)
        {
            result=fatorial(num1);
            printf("\nFatorial de %d = %d",num1, result);
        }
        else if(opc == 3)
        {
            result= sigma(num1);
            printf("\n Sigma de %d = %d \n", num1, sigma(num1) );
        }
        
        
        printf("\n*******************\n");
        printf("\nContinuar? (s/n)");
        
        //limpar buffer
        fflush(stdin);
        __fpurge(stdin);
        
        scanf("%c", &continuar);
        
     }while(continuar=='s' || continuar=='S');
         
    return 0;
}