#include<conio.h>
#include<stdio.h>

main()
{
      int salario;
      float nuevosalario;
      
      printf("Ingresa salario\n");
      scanf("%i",&salario);
      
      nuevosalario=salario*1.25;
      printf("SU NUEVO SALARIO CON AUMENTO DEL 25 PORCIENTO ES:\n");
      
      printf("nuevo salario es:%.2f",nuevosalario);
      
      getch();
      }
      
      
      
