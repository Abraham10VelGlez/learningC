#include<stdio.h>
#include<conio.h>
main()
{
      double num,fac=1,i;
      printf("ingresa un numero\t");
      scanf("%lf",&num);
    
    if (num>20)
    {
       printf("el numero esta fuera del rango **es demaciado  alto**");  
       }
       if (num<10)
       {
                  printf("el numero esta fuera del rango **es demaciado bajo**"); 
                  }
                  else
                  {
                      printf("el numero esta el el rango de 10 a 20** %.2lf:",num);    
}
      getch();
      }
  
