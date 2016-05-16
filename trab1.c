#include <stdio.h>
//EXERCICIO PARA AJUDAR NO TRABALHO
int main()
{
    
    char nome[5][10]; //carcter, para botar nome, string, []primeiro para repetir, []segundo para tamanho
    float salario[5];//[5]para 5 salarios diferentes
    int i; //ex: vai falar o FUNCIONARIO 1 e dps o 2 etc etc e tal
    
    
    for(i=0; i<=4; i++)
    {
    //Entre com o funcionario
    printf("\nEntre com o nome do funcionario %d: ", i+1); //Aq vai ler o numero dos funci.
    scanf("%s", nome[i]);//[i] para ler varios nomes diferentes
    printf("\nEntre com o salario do funcionario %s: ", nome[i]);
    scanf("%f", &salario[i]);//[i]pelo msm motivo
    }
    
    //listagem
    printf("\nFuncionario\t\tSal.Bruto\tSal.Liq");
    printf("\n------------------------------------------");
    
    //relatorio
    for(i=0; i<5;i++)
    {
        printf("\n%s \t\t\t%.2f \t\t%.2f", nome[i], salario[i], salario[i]*0.8);
    }
    
    printf("\n-------------------------------------------");
    
    return 0;
}