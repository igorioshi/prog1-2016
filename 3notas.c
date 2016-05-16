#include <stdio.h>
//ler as 3 notas de 4 alunos
int main()
{
    int i, j;
    float notas[4][3]; //coluna 0, 1 e 2 = av1, av2 e av3
    float media, soma=0; 
    float av1, av2, av3;
    
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=2; j++)
        {
            //Entre com a av1 do aluno 1:
            printf("\nEntre com a av%d do aluno %d: ", j+1, i+1);//pq n existe aluno 0, "j"
            scanf("%f", &notas[i][j]);
        }
    }
    
    //fazer listagem
    printf("\nNome do aluno\tAV1\tAV2\tAV3"); //\t pra listar
    printf("\n----------------------------------");
    for(i=0; i<=3; i++)
    {
        printf("\nAluno %d\t", i+1);
        for(j=0; j<=2; j++)
        {
            printf("\t%.2f", notas [i][j]);
        }
    }
    
    printf("\n----------------------------------");
    
     //fazer listagem
    printf("\nNome do aluno\tAV1");  //\t pra listar
    printf("\n----------------------------------");
    for(i=0; i<=3; i++)
    {
        printf("\nAluno %d\t", i+1);
        
        printf("\t%.2f", notas [i][0]);
        soma = soma + notas[i][0];
        
    }
    
    media = soma / i;
    
    printf("\n----------------------------------");
    printf("\nMedia\t\t%.2f", media);
    printf("\n----------------------------------");
    
    //relatorio notas de um aluno
    printf("\nEntre com a matricula[1-4]: ");
    scanf("%d", &i);
    
    i--;
    
    printf("\n Nome do aluno\tAV1\tAV2\tAV3");
    printf("\n-----------------------------------");
    printf("\nAluno %d\t", i+1);
    for(j=0; j<=2; j++)
    {
        printf("\t%.2f", notas[i][j]);
    }
    
    av1 = notas[i][0];
    av2 = notas[i][1];
    av3 = notas[i][2];
    
    //verificar resultado
    if( (av1 + av2)/2 >=6 ||
        (av1 + av3)/2 >=6 ||
        (av2 + av3)/2 >=6 )
        
    {
        printf("\tAPROVADO");
    }
    else
    {
        printf("\tREPROVADO");
    }
         
    
    
    return 0;
}