#include <stdio.h>
#include <conio.h>

int bisiesto ();
int bisiesto ()
{
int num1;
printf("Introduce el anio: ");
scanf("%d",&num1);
if((num1%4==0) && !(num1%100==0))
{
    printf("El anio es bisiesto");
}
else if (num1%400==0)
{
    printf("El anio es bisiesto");
}
else
{
    printf("El anio NO es bisiesto");
}

}
main()
{
      bisiesto ();
      getch();
      }
      
