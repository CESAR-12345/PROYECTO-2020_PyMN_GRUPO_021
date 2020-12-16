#include<stdio.h>
int main() {
int EDAD;
printf("Escriba su edad: \n");
scanf("%d", &EDAD);
if (EDAD<18) {
  printf("Eres menor de edad.\n");
}
else {
  printf("Eres mayor de edad.\n");
}
  return 0;
}