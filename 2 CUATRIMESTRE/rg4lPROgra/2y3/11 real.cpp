#include <stdio.h>
#include <conio.h>

int bisiesto ();
int bisiesto ()
{
int num1;
printf("Introduce el a�o: ");
scanf("%d",&num1);
if((num1%4==0) && !(num1%100==0))
{
    printf("El a�o es bisiesto");
}
else if (num1%400==0)
{
    printf("El a�o es bisiesto");
}
else
{
    printf("El a�o NO es bisiesto");
}

}
main()
{
      bisiesto ();
      getch();
      }
      
