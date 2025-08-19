/*
    Desenvolva um algoritmo que recebe como entrada o ano de nascimento de uma pessoa e o ano atual.
    O seu algoritmo deve mostrar a idade da pessoa em anos, a idade da pessoa em meses e a idade da pessoa em dias.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoNasc, anoAtual, idadeAnos, idadeMeses, idadeDias; //variaveis que vão armazenar valores

    printf("Digite o ano de nascimento:"); //pede o ano de nascimento
    scanf("%d", &anoNasc);

    printf("Digite o ano atual:"); //pede o ano atual
    scanf("%d", &anoAtual);

    idadeAnos = anoAtual - anoNasc; //calcula idade em anos
    idadeMeses = idadeAnos * 12; //calcula idade em meses
    idadeDias = idadeAnos * 365; //calcula idade em dias (nao considera anos bissextos)

    printf("Idade em anos: %d\n", idadeAnos); //mostra anos
    printf("Idade em meses: %d\n", idadeMeses); //mostra meses
    printf("Idade em dias: %d\n", idadeDias); //mostra dias

    return 0;
}
