# include <stdio.h> 
# include <windows.h> 

main() 
{ 
int a, b, c, orden; 

printf("\t***Programa para ordenar 3 enteros de manera ascendete y descendente***\n\n"); 
printf ("Introduzca el primer numero: " );  
scanf ("%d", &a); 

printf ("Introduzca el segundo numero: ");  
scanf ("%d", &b);

printf ("Introduzca el tercer numero: "); 
scanf ("%d", &c); 


if (a > b) 
{ 
orden = a; 
a = b; 
b = orden; 
} 

if (a > c) 

{ 
orden = a; 
a = c; 
c = orden; 
} 

if (b > c) 

{ 
orden = b; 
b = c; 
c = orden; 
} 

system ("cls"); 

printf("\t***Programa para ordenar 3 enteros de manera ascendete y descendente***\n\n"); 
printf ("\n\nAscendentemente: %d, %d, %d\n", a, b, c); 

if (a < b) 
{ 
orden = a; 
a = b; 
b = orden; 
} 

if (a < c) 

{ 
orden = a; 
a = c; 
c = orden; 
} 

if (b < c) 

{ 
orden = b; 
b = c; 
c = orden; 

printf ("\n\nDescendentemente: %d, %d, %d\n\n", a, b, c); 

} 

system ("pause"); 

return 0; 

}
