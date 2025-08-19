/*
    Pedro comprou um saco de ra��o com peso em quilos. Ele possui dois gatos, para os quais fornece a quantidade de ra��o em gramas.
    A quantidade di�ria de ra��o fornecida para cada gato � sempre a mesma.
    Fa�a um programa que receba o peso do saco de ra��o e a quantidade de ra��o fornecida para cada gato,
    calcule e mostre quanto restar� de ra��o no saco ap�s cinco dias
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sacoKg, sacoGramas, qtdGato, sobra; //variaveis para armazenar valores

    printf("Digite o peso do saco de racao em kg:");
    scanf("%f", &sacoKg);

    printf("Digite a quantidade de racao fornecida para cada gato em gramas:");
    scanf("%f", &qtdGato);

    sacoGramas = sacoKg * 1000; // 1kg = 1000mg
    sobra = sacoGramas - (2 * qtdGato * 5); // 2 porque s�o 2 gatos, qtdgato da quantidade dada e 5 de dias ap�s, s� multiplicar tudo

    printf("Sobrara %.2f gramas de racao\n", sobra);
    return 0;
}
