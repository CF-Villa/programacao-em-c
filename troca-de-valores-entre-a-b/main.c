/*
    Crie um algoritmo que recebe como entrada dois valores inteiros para as vari�veis A e B.
    O seu algoritmo deve efetuar a troca dos valores de forma que a vari�vel A passe a possuir o valor da vari�vel B
    e a vari�vel B passe a possuir o valor da vari�vel A. Por fim, o seu algoritmo deve imprimir o valor das vari�veis A e B.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, aux; //variaveis para armazenar

    printf("Digite o valor de A:"); //pede A
    scanf("%d", &A);

    printf("Digite o valor de B:"); //pede B
    scanf("%d", &B);

    aux = A; //guarda valor de A em aux
    A = B; //passa valor de B para A
    B = aux; //passa valor de aux para B, ela vai guardar temporariamente o valor

    printf("Novo valor de A: %d\n", A); //mostra novo valor de A
    printf("Novo valor de B: %d\n", B); //mostra novo valor de B

    return 0;
}
