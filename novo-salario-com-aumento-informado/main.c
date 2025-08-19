/*
    Um dos s�cios da empresa descrita acima soube que voc� desenvolveu um algoritmo para o reajuste salarial
    para a empresa e pediu que voc� desenvolva um algoritmo similar.
    Na verdade, ele gostaria que voc� acrescentasse ao programa anterior � possibilidade dele informar n�o somente o sal�rio atual
    do funcion�rio, mas tamb�m o valor percentual que deve ser incrementado para aquele funcion�rio,
    uma vez que ele aplicar� valores percentuais de aumento diferentes para cada funcion�rio.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, percentual, novoSalario; //variaveis para ramezenar os valores

    printf("Digite o salario atual:"); //pede o salario
    scanf("%f", &salario); // le o sal�rio

    printf("Digite o percentual de aumento:"); //pede o percentual em % mesmo
    scanf("%f", &percentual); //le o percentual em

    novoSalario = salario + (salario * (percentual / 100)); //
    printf("O novo salario eh: %.2f\n", novoSalario); //mostra o resultado, divide o % por 100, multiplica pelo sal�rio e soma.

    return 0;
}
