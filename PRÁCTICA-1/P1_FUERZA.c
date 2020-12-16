#include<stdio.h>
#include<conio.h>
int main() {
  float W, MASA;
  float G = 9.8;
    printf("Indique el peso: \n");
    scanf("%f", &MASA);
    W=MASA*G;
    printf("La fuerza de atracción es: %f\n", W);
  getch();
  return 0;
}
