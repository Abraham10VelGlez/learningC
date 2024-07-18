#include <iostream> 
#include <conio.h> 
int main(){ 
int veces = 0, i = 0; 
char caracter; 
printf("Escribe un caracter: "); 
scanf("%c", &caracter); 
printf("Escribe el numero de veces que se repetira: "); 
scanf("%d", &veces); 
do{ 
printf("\n%c",caracter); 
i++; 
}while(i<veces); 
getch(); 
return 0; 
}
