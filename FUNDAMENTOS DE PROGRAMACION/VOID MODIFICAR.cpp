#include<stdio.h>
#include<conio.h>
void modificar(int);
int main()
{
      int a=2;
      printf("ANTES DE MODIFICAR %d\n",a);
      modificar(a);
      printf("DESPUES DE MODIFICAR %d\n",a);
      getch();
}
void modificar(int a)
{
     a*=3;
     printf("DESDE LA FUNCION %d\n",a);
     }
     
      
