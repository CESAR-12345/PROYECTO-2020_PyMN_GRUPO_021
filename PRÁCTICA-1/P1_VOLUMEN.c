#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    float PI = 3.1416;
    float VOLUMEN, R;
    printf("Indique el valor del radio:\n");
    scanf("%f", &R);
    VOLUMEN = 4/3*PI*pow(R, 3);
    printf("El volumen de la esfera es: %f \n", VOLUMEN);
  getch();
  return 0;
}
