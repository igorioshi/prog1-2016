#include <stdio.h>
//exercicio para ler seu nome, av1 e av2, calcular a media
int main()
{
    float media, av1, av2;
    char nome[20]; //para caber somente 10 letras
    
    printf("\nEntre com seu nome:");
    scanf("%s", nome); //%s pra entrar a variavel char nome
    
    printf("\nEntre com sua nota AV1:");
    scanf("%f", &av1);
    
    printf("\nEntre agora com a AV2:");
    scanf("%f", &av2);
    
    media = (av1 + av2) / 2;
    printf("\n Ola %s, sua media eh %.2f \n", nome, media); //"%s" ali para sair a string nome
    
    
    return 0;
}