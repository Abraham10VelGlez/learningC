#include<conio.h>
#include<stdio.h>

main()
{
      
      float monmen,opera1,opera2,opera3;
      
      printf("ingresa monto mensual: ");
      scanf("%.2f",&monmen);
      
      opera1=monmen*0.40;
      printf("La cantidad para Ginecologia es:%f\n",opera1);
      opera2=monmen*0.30;
      printf("La cantidad para Ginecologia es:%f\n",opera2);
      opera3=monmen*0.30;
      printf("La cantidad para Ginecologia es:%f\n",opera3);
      
      monmen=opera1+opera2+opera3;
      
      printf("Monto mensual es:%.2f", monmen);
      
      getch();
      }
      
