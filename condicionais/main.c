


/*
------------------------------------------------------
//1. Validar se o n�mero � positivo ou negativo em condicional simples

#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int n;

    printf("Informe um numero inteiro:\n");
        scanf("%d", &n);

    if(n>0){
        printf("O numero eh positivo!");
    }

    if(n<= 0){
        printf("O numero eh nao-positivo");
    }


    return 0;
}

---------------------------------------------------
*/

/*

//Solicita um n�mero ao usu�rio e verifica se � par ou impar em condicional simples
#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int num;
    printf("Informe um numero:\n");
    scanf("%d", &num);
    if(num%2 == 0) {
        printf("O  numero eh par!");
    }
    if(num %2 != 0){ //pega o resto e n�o faz a divis�o, num == num / 2 n�o faz sentido
        printf("O numero eh impar!");

    }

    return 0;
}
------------------------------------------------------------
*/

/*

//Implemente um algoritmo que recebe dois dois n�meros informados pelo usu�rio e verifica se os mesmos s�o iguais
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num1, num2;
    printf("Informe um numero:\n");
    scanf("%d", &num1);

    printf("Informe um segundo numero:\n");
    scanf("%d", &num2);

    if(num1 == num2){
        printf("O numero eh igual");
    }
    else {
        printf("O numero eh diferente");
    }

    return 0;
}
------------------------------------------------------

*/
/*
Implemente um algoritmo que leia dois valores informados pelo usu�rio
e efetue a adi��o deles. Caso o resultado seja maior que 10, imprimir o
resultado, caso contr�rio imprimir a mensagem �Soma menor que 10�*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num1, num2, adicao;
    printf("Informe um numero:");
    scanf("%d", &num1);

    printf("Informe um segundo numero:");
    scanf("%d", &num2);

    adicao = num1+num2;
    printf("Sua adicao eh %d:\n", adicao);

    if (adicao >= 10) {
        printf("Resultado impresso eh maior que 10\n");
    }
    else {
        printf("O resultado � menor ou igual a 10, nao pode ser impresso");
    }

    return 0;
}





/*
-----------------------------------------------------

CONTE�DO:

== igualdade
= atribui��o
!= desigualdade
> maior
< menor
>= igual ou maior
<= igual ou menor


if(condi��o){               CONDICINAL SIMPLES: IF
    <bloco de comando>
}


if(condi��o){               CONDICINAL COMPOSTA: IF ELSE
    <bloco de comando>
else {
    <bloco de comando>
}


--------------------------------------------------------
*/
