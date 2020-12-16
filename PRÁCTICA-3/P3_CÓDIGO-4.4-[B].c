#include <stdio.h>
int main() {
  int i, a=0, b=1, c, n;
  printf("Indique el número hasta que numero desea sumar: \n");
  scanf("%d", &n);
  printf("0, ");
  for (i=0; i<n-2; i++){
    c=a+b;
    printf("%d, ", c );
    a=b;
    b=c;
  }
printf("\n");
return 0;
}