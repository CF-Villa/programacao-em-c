// RECEBE O VALOR DE UM ANGULO, CALCULE O SENO, COSSENO E TANGENTE.

#include <stdio.h>
#include <math.h> //biblioteca para operações matemáticas

int main ()
{
    double angulo, seno, cosseno, tangente;
    printf("Informe o valor do angulo:");
    scanf("%lf", &angulo);
    seno = sin(angulo);
    cosseno = cos(angulo);
    tangente = tan(angulo);
    printf("Seno: %.2lf\n", seno); // é .2 e não 2.
    printf("Cosseno: %.2lf\n", cosseno);
    printf("Tangente: %.2lf\n", tangente);

    return 0;
}
