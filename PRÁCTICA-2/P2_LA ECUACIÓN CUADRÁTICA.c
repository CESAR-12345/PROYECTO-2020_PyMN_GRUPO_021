#include <stdio.h>
#include <math.h>

int main()
{
    int A,B,C,D;
    float X,Y;

    printf("Ingrese coeficiente a: ");
    scanf("%d",&A);

    while (A == 0) {
        printf("Ingrese coeficiente a: ");
        scanf("%d",&A);
    }

    printf("Ingrese coeficiente b: ");
    scanf("%d",&B);
    printf("Ingrese coeficiente c: ");
    scanf("%d",&C);

    D = B*B-4*A*C;
    if (D > 0) {
        X = (-B+sqrt(D))/(2*A);
        Y = (-B-sqrt(D))/(2*A);
        printf("x1 = %.2f\n",X);
        printf("x2 = %.2f\n",Y);
    }
    else if (D == 0) {
        X = (-B)/(2*A);
        printf("x1 = %.2f\n",X);
    }
    else
        printf("La ecuacion no tiene solucion");

    return 0;
}
