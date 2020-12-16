#include<stdio.h>
#include<conio.h>
int main() {
  float PESO, IMC, ESTATURA;
  printf("Indique su peso en kilogramos: \n");
  scanf("%f", &PESO);
  printf("Indique su estatura en metros: \n");
  scanf("%f", &ESTATURA);
  IMC = PESO / (ESTATURA*ESTATURA);
  printf("Su IMC es de: %f\n", IMC);
  getch();
  return 0;
}
