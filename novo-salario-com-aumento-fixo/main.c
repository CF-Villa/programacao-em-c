
/*
    O proprietário de uam empresa precisa de um programa de computador para calcular o novo salário que seus funcionários
     irão receber a partir do mês que vem. Sabendo que o aumento de salário para todos os funcionários será de 25%,
     escreva um algoritmo que recebe o valor do salário atual do funcionário e informa o seu novo salário acrescido de 25%.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novoSalario; //variaveis para armazenar os valores

    printf("Digite o salario atual:"); //pede o salario
    scanf("%f", &salario); //le o salario

    novoSalario = salario + (salario * 0.25); //calcula o novo salario, salario + 25% do salario + o salario, 25% + 25/100

    printf("O novo salario eh: %.2f\n", novoSalario); //mostra o resultado com 2 casas decimais e quebra de linha

    return 0;
}
