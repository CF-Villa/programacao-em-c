
/*
#include <stdio.h>

int main () {


 return 0;
}

simbolo representa��o
&&        e 9pra ser && (pra ser verdadeiro ou dois tem que ser verdadeiro)
||        ou            (pelomenos um tem que ser verdadeiro para ser verdadeiro)
!         nega��o       (torna informa��o pro contrario, tipo se � verdadeiro vira falso) PORTA NOT
!=        diferente     (se um for diferente do outro � verdadeiro)

|| (do lado do shift)

-----------------------------------------
*/


/*
// Informar s eo n�mero � negativo, nulo ou positivo
#include <stdio.h>

int main () {
 int num;
 printf("Informe um numero:\n");
 scanf("%d", &num);
 if(num>0){
    printf("Numero positivo\n");
 }
 else if(num == 0) {
    printf("Numero nulo\n");
 }
 else{
    printf("Numero negativo!\n");
 }
 return 0;
}
-------------------------------------------------------------
*/
/*Escreva um algoritmo em C que recebe dois n�meros inteiros do
usu�rios e verifica se ambos os n�meros s�o pares. Em caso posi9vo
imprimir a mensagem �Ambos os n�meros informados s�o pares!�.
Em caso nega9vo, verificar se algum dos dois n�meros � par e
informar.*/

/*
#include <stdio.h>

int main () {
 int num1, num2,;
 printf("Informe o primeiro numero\n");
 scanf("%d", &num1);
 printf("Informe o segundo numero\n");
 scanf("%d", &num2);
 if (num1%2 == 0 && num2%2 == 0) { // variavel num1 modulo de divis�o por 2 resto igual a 0 e  varivel num2 modulo divis�o por 2 o resto � igual a 0
    printf("Sao pares\n");
 }
 else {
    printf("Sao impares\n");

 }

 return 0;
}
------------------------------------------------------------
*/


/*

Escreva um algoritmo que calcule o peso ideal de uma pessoa
baseada na sua altura e sexo. Assim, o algoritmo deve receber como
entrada o sexo da pessoa (�m� ou �M� para masculino e �f� ou �F� para
feminino) e a altura em metros. Para c�lculo do peso ideal, voc�
deve se basear na regra abaixo:
� para homens: (72.7 * h) � 58;
� para mulheres: (62.1 * h) � 44.7.
*/


#include <stdio.h>

int main () {
 char sexo;
 double altura, peso;

 printf("Informe seu sexo, 'm' ou 'M' para masculino e 'f' ou 'F' para feminino?\n");
 scanf("%c", &sexo);

 printf("Agora informe sua altura em metros:\n");
 scanf("%lf", &altura);

 if ( sexo == 'm'|| sexo == 'M' ){
    peso = (72.7 * altura) - 58;
    printf("Peso ideal: %.2lf\n", peso);
 } else if ( sexo == 'f' || sexo == 'F'){
    peso = (62.1 * altura) - 44.7;
    printf("Peso ideal: %.2lf\n", peso);
 } else {
    printf("Op�ao invalida!");
 }

 return 0;
}

//CORRIGIR















