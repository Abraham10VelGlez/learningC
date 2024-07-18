#include <stdio.h>
#include<conio.h>
main(){
double x,y;

printf("Escribe el primer numero");
scanf("%lf",&x);
printf("Escribe el segundo numero");
scanf("%lf",&y);

if(x<y) printf("El menor es %lf",x);
else if(y<x) printf("El menor es %lf",y);
else printf("Son iguales");
getch();
}
