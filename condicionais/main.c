


/*
------------------------------------------------------
//1. Validar se o número é positivo ou negativo em condicional simples

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

//Solicita um número ao usuário e verifica se é par ou impar em condicional simples
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
    if(num %2 != 0){ //pega o resto e não faz a divisão, num == num / 2 não faz sentido
        printf("O numero eh impar!");

    }

    return 0;
}
------------------------------------------------------------
*/

/*

//Implemente um algoritmo que recebe dois dois números informados pelo usuário e verifica se os mesmos são iguais
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
Implemente um algoritmo que leia dois valores informados pelo usuário
e efetue a adição deles. Caso o resultado seja maior que 10, imprimir o
resultado, caso contrário imprimir a mensagem “Soma menor que 10”*/

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
        printf("O resultado é menor ou igual a 10, nao pode ser impresso");
    }

    return 0;
}





/*
-----------------------------------------------------

CONTEÚDO:

== igualdade
= atribuição
!= desigualdade
> maior
< menor
>= igual ou maior
<= igual ou menor


if(condição){               CONDICINAL SIMPLES: IF
    <bloco de comando>
}


if(condição){               CONDICINAL COMPOSTA: IF ELSE
    <bloco de comando>
else {
    <bloco de comando>
}


--------------------------------------------------------
*/
