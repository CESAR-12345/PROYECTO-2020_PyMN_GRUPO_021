#include <stdlib.h>
#include <stdio.h>
int main()
{
 float altura;
 float peso;
 float IMC;

    printf("Introduce tu altura (en metros): ");
    scanf("%f", & altura);

    printf("Introduce tu peso (en kilogramos): ");
    scanf("%f", & peso);

    IMC = peso/(altura*altura);

    printf("Tu indice de masa corporal es:%f ", IMC );

    if (IMC<18.5)
        printf("\n Usted cuenta con peso bajo");
        else
     if (18.5<=IMC&&IMC<=24.9)
        printf("\n Usted cuenta con peso normal");
        else
     if (25<=IMC&&IMC<=29.9)
        printf("\n Usted cuenta con sobrepeso");
        else
     if (30<=IMC&&IMC<=34.5)
        printf("\n Cuenta obesidad tipo 1");
        else
     if (35<=IMC&&IMC<=39.9)
        printf("\n Cuenta con obesidad tipo 2");
        else
     if (IMC>=40)
        printf("\n Cuenta con hiperobesidad");



return 0;

}