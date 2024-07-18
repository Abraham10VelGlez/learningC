#include <stdio.h>
#include <conio.h> 

int v,g,o;

int triangulos();
int triangulos()
{
    printf ("Escribe el 1er lado:  ");
scanf("%i",&v);
printf ("\nEscribe el 2do lado:  ");
scanf("%i",&g);
printf ("\nEscribe el 3er lado:  ");
scanf("%i",&o);

printf("\n\n\n"); 

if ((v+g>o) && (v+o>g) && (g+o)>v)
{
if (v==g && v==o) 
printf ("\tEs un triangulo Equilatero"); 
else 
if (v==g || v==o || g==o) 
printf ("\tEs un triangulo Isosceles"); 
else 
printf("\tEs un triangulo Escaleno");
}
else
printf("Esos numeros no forman un triangulo");

}
main()
{
       triangulos();
       getch();
}
