#include <stdio.h>
#include <conio.h>
main(){
int x,y,z;

printf ("Escribe el primer lado");
scanf("%i",&x);
printf ("\nEscribe el segundo lado");
scanf("%i",&y);
printf ("\nEscribe el tercer lado");
scanf("%i",&z);

printf("\n\n\n"); 
if ((x+y>z) && (x+z>y) && (y+z)>x){
if (x==y && x==z) printf ("Equilátero"); 
else if (x==y || x==z || y==z) printf ("Isósceles"); 
else printf("Escaleno");
}
else
printf("Esos numeros no forman un triangulo");
getch();
}
