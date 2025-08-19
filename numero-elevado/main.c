//CALCULE UM NÚMERO ELEVADO, recebe x e y e faz x^y.

// double pow(double,double)
//           (base, expoente)
// nome da variavel = pow (valor da base, valor do expoente)

#include <stdio.h>
#include <math.h> //biblioteca para operações matemáticas

int main ()
{
    double x, y, resultado;
    printf("Informe o valor de x:");
    scanf("%lf", &x);
    printf("Informe o valor de y:");
    scanf("%lf", &y);
    resultado = pow(x, y);
    printf("Resultado: %.2lf\n", resultado);
    return 0;
}
