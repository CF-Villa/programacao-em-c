#include <stdio.h>
#include <stdlib.h>
#include <math.h> //biblioteca para operações matemáticas


// Escrever um algoritmo em C que recebe dois números do usuário e retorna a raiz quadrada da multiplicação desses números.

int main ()
{
    double num1, num2, mult, raiz;
    printf("Insira um numero:");
    scanf("%lf", &num1);
    printf("Insira um segundo numero:");
    scanf("%lf", &num2);
    printf("resultado: %.2f", sqrt(num1*num2)); //raiz quadrada de (numero * numero)
    return 0;

}
