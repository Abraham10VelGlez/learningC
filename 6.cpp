#include <conio.h> 
#include <stdio.h>


main() 
{
       int num;  
do 
{ 
printf("Dame el numero: "); 
scanf("%d",&num); 
}
while ((num<10) || (num>20)); 
printf("Numero dentro de rango:"); 
getch();

} 


