#include <stdio.h>
int main()
{
    float votocand1=0, votocand2=0;
    int voto;
    char continuar;
    
    do{
        printf("\nEntre com o voto");
        printf("\n1 - Dilma");
        printf("\n2 - Aecio");
        printf("\nOpção: ");
        scanf("%d", &voto);
        
        if(voto == 1)
            votocand1++;
        else if (voto == 2)
            votocand2++;
            
        printf("\nDeseja continuar(s/n)?");
        scanf(" %c", &continuar);//dar espaço antes do &c (gambiarra)
        
        
    }while(continuar == 's' || continuar =='S');
    
    printf("\nPercentagem de votos do candidato 1 = %.2f%%", ((votocand1*100)/(votocand1 + votocand2)) );
    printf("\nPercentagem de votos do candidato 2 = %.2f%%", ((votocand2*100)/(votocand1 + votocand2)) );
    
    return 0;
}