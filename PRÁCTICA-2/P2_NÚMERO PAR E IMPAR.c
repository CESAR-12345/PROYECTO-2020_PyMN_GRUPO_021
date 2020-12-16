#include <stdio.h>
#include <conio.h>
int num;
int main() {
  printf("Escriba un numero que sea entero y positivo\n");
  scanf("%d",&num);
    if (num%2==0) {
    printf("Es par\n");
  }
  else {
      printf("No es par\n");
  }
  getch();
  return 0;
}
