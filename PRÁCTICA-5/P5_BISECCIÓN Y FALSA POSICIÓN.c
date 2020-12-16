#include <stdio.h>
#include <math.h>

float funcion1(float x_in),funcion2(float x_in), error_relativo(float va,float vn);
float bise(float a, float b), falsa1(float a, float b), falsa2(float a, float b);
float va, vn, a,b;
int i, iteraciones, metodo;

int main(){
    
    printf("¿CUAL ES EL METODO QUE USTED DESEA UTILIZAR? \n");
    printf("1.BISECCION           2.FALSA POSICION\n");
    scanf("%d",&metodo);
    switch(metodo){
        case 1:
        printf("¿CUANTAS ITERACCIONES DESEA? \n");
        scanf("%d",&iteraciones);
        printf("\n");
        a=-3;
        b=-2;
        vn=0;
        va=0;
        printf("i------------xi------------a------------b---------------E\n");
        for(i=1; i<=iteraciones; i++){
            printf("%d       %f      %f     %f      %f\n",i,bise(a,b),a,b,error_relativo(va,vn));
            if((funcion1(a)*funcion1(bise(a,b)))<0){
                b=bise(a,b);
                va=b;
                vn=bise(a,va);
            }
            else{
                a=bise(a,b);
                va=a;
                vn=bise(va,b);
            }
        }
        printf("\n");
        a=1;
        b=2;
        vn=0;
        va=0;
        printf("i-----------xi------------a------------b------------E\n");
        for(i=1; i<=iteraciones; i++){
            printf("%d       %f      %f     %f    %f\n",i,bise(a,b),a,b,error_relativo(va,vn));
            if((funcion2(a)*funcion2(bise(a,b)))<0){
                b=bise(a,b);
                va=b;
                vn=bise(a,va);
            }
            else{
                a=bise(a,b);
                va=a;
                vn=bise(va,b);
            }
        }
        break;
        case 2:
        printf("¿CUANTAS ITERACIONES DESEA?\n");
        scanf("%d",&iteraciones);
        printf("\n");
        a=-3;
        b=-2;
        vn=0;
        va=0;
        printf("                                   --TRIGONOMETRICA--\n");
        printf("i------------xi------------------a-----------------b---------------E---------------f(a)--------------f(b)\n");
        for(i=1; i<=iteraciones; i++){
            printf("%d-      -%f-        -%f-       -%f-        -%f-      -%f-      -%f-    \n",i,falsa1(a,b),a,b,error_relativo(va,vn),funcion1(a),funcion1(b));
            if((funcion1(a)*funcion1(falsa1(a,b)))<0){
                b=falsa1(a,b);
                va=b;
                vn=falsa1(a,va);
            }
            else{
                a=falsa1(a,b);
                va=a;
                vn=falsa1(va,b);
                
            }
        }
        printf("\n");
        printf("\n");
        a=1;
        b=2;
        vn=0;
        va=0;
        printf("                                           --LOGARITMICA--\n");
        printf("i------------xi-------------------a----------------b---------------E----------------f(a)------------f(b)\n");
        for(i=1; i<=iteraciones; i++){
        printf("%d-        -%f-         -%f-       -%f-        -%f-      -%f-      -%f-   \n",i,falsa2(a,b),a,b,error_relativo(va,vn),funcion2(a),funcion2(b));
        if((funcion2(a)*funcion2(falsa2(a,b)))<0){
            b=falsa2(a,b);
            va=b;
            vn=falsa2(a,va);
        }
        else{
            a=falsa2(a,b);
            va=a;
            vn=falsa2(va,b);
            
        }
        }
    }

return 0;
}

float funcion1(float x_in){
    float fx;
    fx= (2*(x_in)*cos(2*x_in))-pow((x_in+1),2);
    return fx;
}
float bise (float a, float b){
    float xi;
    xi=((a+b)/2);
    return xi;
}
float funcion2(float x_in){
    float fx;
    fx= log(fabs(x_in))+pow(x_in,2)-4;
    return fx;
}
float error_relativo(float va, float vn){
    float epsilon;
    epsilon= fabs((vn-va)/vn)*100;
    return epsilon;
}
float falsa1(float a, float b){
    float xi;
    xi=b-((funcion1(b)*(a-b))/(funcion1(a)-funcion1(b)));
    return xi;
}
float falsa2(float a, float b){
    float xi;
    xi=b-((funcion2(b)*(a-b))/(funcion2(a)-funcion2(b)));
    return xi;
}



