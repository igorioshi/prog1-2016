#include <stdio.h>

int fatorial(int num)//num = parametro
{
        int fat;
        
        for(fat=1; num>=1; num--)//ex: fat=5, fat=5*4(num-- = 5-1), fat=20*3.....
            fat = fat * num;
            
        return fat;// tem q retornar ao calculo
        
}


int main()
{
    int num;
    
        printf("\nEntre com um numero interiro: ");
        scanf("%d", &num);
        
    
        printf("\n Fat de %d = %d \n", num, fatorial(num) ); //num recebe parametro
    
    
    return 0;
}