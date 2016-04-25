#include <stdio.h>

    int main()
{  
    int num;
    int resto;
   
    
     printf("\nEntre com num:"); //mostra na tela
     scanf("%d", &num); //ler pelo teclado
     
     resto = num % 2;
        
     
     if(resto == 0)
     {
         printf("\nEste numero eh par\n");
     }

     else
    {
        printf("Este numero eh impar\n");
    }
     
     
     return 0;
}     