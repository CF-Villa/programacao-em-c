/* O custo ao consumidor de um carro novo � a soma do custo de f�brica com a porcentagem do distribuidor
e dos impostos (aplicados ao custo de f�brica). Supondo que a porcentagem do distribuidor seja de 28% e os impostos de 45%,
 escrever um algoritmo que leia o custo de f�brica de um carro e escreva o custo ao consumidor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float custoFabrica, custoFinal;

    printf("Digite o custo de fabrica do carro:");
    scanf("%f", &custoFabrica);

    custoFinal = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);
  // (calcula 28% do custo de fabrica do distrubuidor) + (calcula 45% do custo de impostos, pega o custo de fabrica e soma com as porcentagens
 // 28% = 28 / 100, logo 0.28
    printf("O custo ao consumidor eh: %.2f\n", custoFinal);

    return 0;
}

