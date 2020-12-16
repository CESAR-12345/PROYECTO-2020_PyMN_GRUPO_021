#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int datosarreglos (int *arreglo, int t);
int datosimpresion (int *arreglo, int t);
int datosaleatorio (int *arreglo, int t);
int impresionale (int *arreglo, int t);
int sumarreglos (int *arreglo, int t);
int datosmatriz(int arre[][100], int f, int c);
int suma_unarreglo(int *arreglo, int t);
int matriz(int arre[][100], int f, int c);
int Lmatriz(int arre[][100], int f, int columnas);
int datoa(int arre[][100], int f1, int c1);
int datob(int arra[][100], int f2, int c2);
int sumadosmatrices(int arrb[][100], int f1, int c1);
int m(int arrb[][100], int f1, int c1);
int arre[100][100],arra[100][100],arrb[100][100];
int problema,j,t,i,f,c,f1,c1,f2,c2;
int suma=0;
int arreglo1[100], arreglo2[100], arreglo3 [100], arreglo4[100];

int main()
{
    printf ("Por favor puede indicar problema?\n");
    scanf("%d",&problema);
    switch (problema){
        case 1:
        printf("Por favor puede ingresar el tamaño de los arreglos\n");
        scanf("%d",&t);
        printf("Por favor puede ingresar los elementos del arreglo 1 (%d): \n",t);
        datosarreglos (arreglo1,t);
        printf("Por favor puede ingresar los numeros del arreglo 2 (%d): \n",t);
        datosarreglos (arreglo2,t);
        printf("El arreglo 1: \n");
        datosimpresion (arreglo1,t);
        printf("El arreglo 2: \n");
        datosimpresion (arreglo2,t);
        break;
        case 2:
        printf("Por favor puede ingresar el tamaño de los arreglos\n");
        scanf("%d",&t);
        printf("El arreglo 1: \n");
        impresionale(arreglo1,t);
        printf("El arreglo 2: \n");
        impresionale(arreglo2,t);
        break;
        case 3:
        printf("Por favor puede ingresar el tamaño de los arreglos\n");
        scanf("%d",&t);
        printf("Por favor puede ingresar los numeros del arreglo 1 (%d): \n",t);
        datosarreglos (arreglo1,t);
        printf("Por favor puede ingresar los numeros del arreglo 2 (%d): \n",t);
        datosarreglos (arreglo2,t);
        printf("El resultado de la suma de los elementos vectoriales se puede ver ahora mismo: \n");
        sumarreglos (arreglo3,t);
        break;
        case 4:
        printf("Por favor puede ingresar el tamaño de los arreglos\n");
        scanf("%d",&t);
        printf("Por favor puede ingresar los numeros del arreglo 1 (%d): \n",t);
        datosarreglos (arreglo1,t);
        printf("El resultado de la suma del arreglo se puede ver ahora mismo  ");
        suma_unarreglo (arreglo4,t);
        printf("\n");
        break;
        case 5:
        printf ("Por favor puede ingresar el numero de filas\n");
        scanf("%d",&f);
        printf ("Por favor puede ingresar el numero de columnas\n");
        scanf("%d",&c);
        datosmatriz(arre,f,c);
        printf("\n");
        printf ("La matriz final\n");
        matriz(arre,f,c);
        printf("\n");
        break;
        case 6:
        printf("Por favor puede ingresar el numero de filas\n");
        scanf("%d",&f);
        printf ("Por favor puede ingresar el numero de columnas\n");
        scanf("%d",&c);
        Lmatriz(arre,f,c);
        printf("\n");
        break;
        case 7:
        printf("Por favor puede ingresar el numero de filas de la matriz 1\n");
        scanf("%d",&f1);
        printf ("Por favor puede ingresar el numero de columnas de la matriz 1\n");
        scanf("%d",&c1);
        
        printf("Por favor puede ingresar el numero de filas de la matriz 2\n");
        scanf("%d",&f2);
        printf ("Por favor puede ingresar el numero de columnas de la matriz 2\n");
        scanf("%d",&c2);
        if (f1==f2 && c1==c2) {
            printf("La matriz 1\n");
            datoa(arre,f1,c1);
            printf("La matriz 2\n");
            datob(arrb,f2,c2);
            printf("El resultado de sumar las matrices se puede ver ahora mismo :\n");
            sumadosmatrices(arrb,f1,c1);
            printf("\n");
        }else{
            printf("Estan mal los datos\n");
        }
        break;
        case 8:
        printf("Por favor puede ingresar el numero de filas de la matriz 1\n");
        scanf("%d",&f1);
        printf("Por favor puede ingresar el numero de columnas de la matriz 1\n");
        scanf("%d",&c1);
        
        printf("Por favor puede ingresar el numero de filas de la matriz 2\n");
        scanf("%d",&f2);
        printf("Por favor puede ingresar el numero de columnas de la matriz 2\n");
        scanf("%d",&c2);
        if (f1==c2){
            printf ("La matriz 1\n");
            datoa(arre,f1,c1);
            printf("La matriz 2\n");
            datob(arra,f2,c2);
            printf("El resultado de la multiplicacion se puede ver ahora mismo \n");
            m(arrb,f1,c1);
            printf("\n");
        }else{
            printf("Estan mal los datos\n");
        }
        break;
    }
        
    return 0;
}
int datosarreglos (int*arreglo,int t){
    for(j=1;j<=t;j++){
        printf("numero [%d] ",j);
        scanf("%d",&arreglo[j]);
        
    }
    printf("\n");
}
int datosimpresion (int*arreglo,int t){
    for(j=1;j<=t;j++){
        printf("posicion [%d] %d\n",j,arreglo [j]);
        
}
}
int datosaleatorio(int *arreglo, int t){
    int j;
    for(j=1; j<=t; j++){
        arreglo[j]=1+rand()%100;
    }
}
int impresionale(int *arreglo, int t){
    int j;
    for(j=1; j<=t; j++){
        datosaleatorio(arreglo,t);
        printf("posicion [%d]: %d\n",j,arreglo[j]);
    }
}
int sumarreglos (int*arreglo,int t){
    for(j=1; j<=t; j++){
        arreglo[j]=arreglo1[j]+arreglo2[j];
        printf("La suma es [%d]: %d\n",j,arreglo[j]);
    }
}
int suma_unarreglo(int*arreglo,int t){
    for(i=1; i<=t ;i++){
        suma=suma+arreglo1[i];
    }
    printf("%d",suma);
}
int datosmatriz(int arre[][100], int f, int c){
    for (i=1; i<=f; i++)
    for (j=1; j<=c; j++){
        printf("orden [%d][%d] => ",i,j);
        scanf("%d",&arre[i][j]);
    }
}
int matriz(int arre[][100],int f, int c){
    for (i=1; i<=f; i++){
        printf("\n");
        for (j=1; j<=c; j++)
        printf(" %d",arre[i][j]);
        printf("\n");
    }
}
int Lmatriz(int arre[][100], int f, int c){
    for (i=1; i<=f; i++){
        printf("\n");
        for(j=1; j<=c; j++){
            arre[i][j]=1+rand()%100;
            printf(" %d",arre[i][j]);
        }
    }
}
int datoa(int arre[][100], int f1, int c1){
for (i=1; i<=f1; i++)
for(j=1; j<=c1; j++){
    printf("orden [%d][%d] => ",i,j);
    scanf("%d",&arre[i][j]);
}
}
int datob(int arre[][100], int f2, int c2){
for (i=1; i<=f2; i++)
for(j=1; j<=c2; j++){
    printf("orden [%d][%d] => ",i,j);
    scanf("%d",&arra[i][j]);
}
}
int sumadosmatrices(int arrb[][100], int f1, int c1){
    for (i=1; i<=f1; i++)
    for (j=1; j<=c1; j++)
    arrb[i][j]=arre[i][j]+arrb[i][j];
    for(i=1; i<=f1; i++){
        printf("\n");
        for(j=1; j<=c2; j++)
        printf(" %d", arrb[i][j]);
        printf("\n");
    }
}
int m(int arrb[][100], int f1, int c1){
    int i,j, acumulador,contador;
    for(i=1; i<=f1; i++)
    for(j=1; j<=c1; j++){
        for(acumulador=0, contador=0; contador<=c1; contador++)
        acumulador=acumulador+arre[i][contador]*arra[contador][j];
        arrb[i][j]=acumulador;
    }
    for(i=1; i<=f1; i++){
        printf("\n");
        for(j=1; j<=f2; j++)
        printf(" %d",arrb[i][j]);
    }
}