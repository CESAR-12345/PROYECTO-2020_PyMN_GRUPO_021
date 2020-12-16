#include <stdio.h> 
#include <math.h>   
float f1(float x) 
{      
return 8*sin(x)*exp(-x)-1; 
}  
float df1(float x) 
{     
return -8*sin(x)*exp(-x)+8*cos(x)*exp(-x); }  
float f2(float x) 
{   
return 2*x*x*x -11*x*x+17.7*x-5; 
}  
float df2(float x) 
{     
return 6*x*x-22*x+17.7; 
}  
float errorAbsoluto(float x1,float x0) 
{     
float ea;          
ea= (x1-x0)/x1;          
if (ea<0)       ea=-ea;            
return ea*100; 
}  
void newtonRaphson() 
{     
float x0,x1;     
int i=0,imax;     
float ea=100;     
float error;          
printf("Por favor puede ingresar el valor de X0: ");     
scanf("%f",&x0);    //0     
printf("Por favor puede ingresar el valor del error: ");     
scanf("%f",&error);   //0.001     
printf("Por favor puede ingresar el maximo de iteraciones: ");     
scanf("%d",&imax);      //10               
printf(" i     xi          ea\n");     
printf(" %d     %f \n",i,x0);          
while  ((ea>error)&&(i<imax))     
{         
x1=x0-f2(x0)/df2(x0);   //metodo de newtonRaphson                  
ea=errorAbsoluto(x1,x0);         
i=i+1;         
printf(" %d     %f  %f \n",i,x1,ea);               x0=x1;             
 }         
  }  
void secante() 
{     
float x0,x1,x2;     
float error,ea=100;     
int imax,i=0;     
float df;          
printf("Por favor puede ingresar el valor de X0: ");     
scanf("%f",&x0);      
printf("Por favor puede ingresar el valor de X1: ");     
scanf("%f",&x1);      
printf("Por favor puede ingresar el valor del error: ");    
scanf("%f",&error);      
printf("Por favor puede ingresar el maximo de iteraciones: ");     
scanf("%d",&imax);             
printf("i    xi      xi+1       f'(xi)     ea\n");     
printf("%d %f  %f   \n",0,x0,x1);               
while ((ea>error)&&(i<imax))      
{          
df= (f2(x0)-f2(x1))/(x0-x1);                   
x2=x1-f2(x1)*(x0-x1)/(f2(x0)-f2(x1));   //metodo secante                 
ea=errorAbsoluto(x2,x1);         
i=i+1;       
printf("%d %f  %f   %f  %f \n",i,x1,x2,df,ea);                  x0=x1;         
x1=x2;      
}      
}  
int main() 
{    
newtonRaphson();    
secante();      
return 0; 
}