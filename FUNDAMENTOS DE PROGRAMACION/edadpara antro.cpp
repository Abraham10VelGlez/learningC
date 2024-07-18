#include <stdio.h> 
#include <conio.h> 
int main() 
{ 
 int persmay, persmen; 
 printf("ERES APTO PARA ENTRAR AL ANTRO O NO?: \n"); 
 printf("DIGITE LA EDAD: \n"); 
 scanf("%d",&persmen); 
 if (persmen<18) {
 printf("T*T ES MENOR DE EDAD NO PUEDE PASAR T*T");
 printf("La persona es menor: %d \n", persmen); 
 if(persmay>18){
 printf("La persona es mayor: %d \n", persmay);                
 getch(); 
 return 0; 
}
