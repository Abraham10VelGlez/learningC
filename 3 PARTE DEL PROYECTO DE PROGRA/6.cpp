#include <conio.h> 
#include <stdio.h>

  int num;  
  
  int validar();
  int validar()
  {
      do 
{ 
printf("Dame el numero: "); 
scanf("%d",&num); 
}
while ((num<10) || (num>20)); 
printf("Numero dentro de rango: %d",num>20); 
}

main()
{
      validar();
getch();

} 
