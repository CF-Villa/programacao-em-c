/*
    Um dos sócios da empresa descrita acima soube que você desenvolveu um algoritmo para o reajuste salarial
    para a empresa e pediu que você desenvolva um algoritmo similar.
    Na verdade, ele gostaria que você acrescentasse ao programa anterior à possibilidade dele informar não somente o salário atual
    do funcionário, mas também o valor percentual que deve ser incrementado para aquele funcionário,
    uma vez que ele aplicará valores percentuais de aumento diferentes para cada funcionário.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, percentual, novoSalario; //variaveis para ramezenar os valores

    printf("Digite o salario atual:"); //pede o salario
    scanf("%f", &salario); // le o salário

    printf("Digite o percentual de aumento:"); //pede o percentual em % mesmo
    scanf("%f", &percentual); //le o percentual em

    novoSalario = salario + (salario * (percentual / 100)); //
    printf("O novo salario eh: %.2f\n", novoSalario); //mostra o resultado, divide o % por 100, multiplica pelo salário e soma.

    return 0;
}
