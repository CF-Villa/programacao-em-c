/*
    Crie um algoritmo para realizar a conversão de valores informados em real (R$) para dólar (US$).
    O programa deve receber como entrada o valor em real e o valor da cotação do dólar.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais, cotacao, dolares; //variaveis para armazenar valores

    printf("Digite o valor em reais:");
    scanf("%f", &reais);

    printf("Digite a cotacao do dolar:");
    scanf("%f", &cotacao);

    dolares = reais / cotacao;
    // dolar = o quanto eu tenho em reais / valor de um dolar, cotação é o valor da moeda comparada a outra, no caso aqui em maiores quantidades

    printf("Valor em dolares: %.2f\n", dolares);

    return 0;
}
