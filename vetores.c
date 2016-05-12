#include <stdio.h>
    //Programa q le av1 de 10 alunos, calcular e imprimir a media
int main()
{
    float av1[10];
    float soma=0, media=0;
    int i;
    float maior = -999;
    int quantmaior=0;
    int qtdMaiorMedia6 = 0;
    float percentMedia6;
    
    for(i=0; i<=9; i++ )
    {
        printf("\nEntre com a AV1 do aluno %d: ", i+1);
        
        scanf("%f", &av1[i]);             //[i] pra ler todas as av1
        soma = soma +av1[i];
        
        //guarda a maior nota
        if (av1[i] > maior)
        {
            maior = av1[i];
        }
    }
    
        media = soma / i;
        printf("\nMedia = %.2f", media);
        
      
        for(i=0;i<=9;i++)
    {
            if(av1[i] >= media)
             {
                printf("\nEsta nota >= media - %.2f", av1[i]);
            }
            
            if(av1[i] == maior)
            {
                quantmaior++;
            }
            
            if(av1[i] = 6)
            {
                qtdMaiorMedia6++;
            }
            
    }
    
    percentMedia6 = (float)qtdMaiorMedia6 / i;
    
    //imprimir relatoria
    printf("\n %d alunos tiraram a maior nota = %.2f \n", quantmaior, maior);
    
    printf("\n Porcentagem de alunos com nota maior media 6 = %.2f%% \n", percentMedia6*100);
    
    
    return 0;
}