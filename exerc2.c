#include <stdio.h>
#include <string.h>
//palindromo , usando strlen
int main()
{

    char palavra[20];
    int i, tamanho;
    
    
        printf("\nEntre com uma palavra: ");
        scanf("%s", palavra);
        
        printf("\n"); //pula uma linha em branco
        
        //imprimir na ordem inversa
        tamanho = strlen(palavra);
        
        
        
        for(i=tamanho-1; i>=0; i--)
        {
            printf("%c", palavra[i]);
        }
        
        printf("\n");//pula linha em branco
        
        
    
    
    
    return 0;
}