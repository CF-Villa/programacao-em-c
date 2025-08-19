/*
    Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a quantidade de ração em gramas.
    A quantidade diária de ração fornecida para cada gato é sempre a mesma.
    Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para cada gato,
    calcule e mostre quanto restará de ração no saco após cinco dias
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
    sobra = sacoGramas - (2 * qtdGato * 5); // 2 porque são 2 gatos, qtdgato da quantidade dada e 5 de dias após, só multiplicar tudo

    printf("Sobrara %.2f gramas de racao\n", sobra);
    return 0;
}
