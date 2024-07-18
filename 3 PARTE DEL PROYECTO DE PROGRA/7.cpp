#include <stdio.h>
#include <conio.h> 

int x,y,z;

int triangulos();
int triangulos()
{
    printf ("Escribe el primer lado");
scanf("%i",&x);
printf ("\nEscribe el segundo lado");
scanf("%i",&y);
printf ("\nEscribe el tercer lado");
scanf("%i",&z);

printf("\n\n\n"); 

if ((x+y>z) && (x+z>y) && (y+z)>x)
{
if (x==y && x==z) printf ("Equilatero"); 
else if (x==y || x==z || y==z) printf ("Isosceles"); 
else printf("Escaleno");
}
else
printf("Esos numeros no forman un triangulo");

}
main()
{
       triangulos();
       getch();
}
