#include<conio.h>
#include<stdio.h>

float convertidor_temperatura(float cel,float fah,float primero,float despues);
float convertidor_temperatura(float cel,float fah,float primero,float despues)
{
      printf("\nDIGITA LOS GRADOS FAHARENHEIT\n");
      scanf("%f",&fah);
      
      primero=fah-32;
despues=(primero*5)/9;
printf("\n%.2f Faharenheit es igual a %.2f grados celcius \n",fah,despues);

}
main()
{
      float cel,fah,primero,despues;
 convertidor_temperatura(cel,fah,primero,despues);
 getch();
}

