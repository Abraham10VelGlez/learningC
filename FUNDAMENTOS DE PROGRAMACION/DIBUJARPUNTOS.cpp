#include<stdio.h>
#include<conio.h>
void dibujarpuntos(int numPuntos);
int main()
{
      int i, numpuntos;
      for(i=1;i<=5;i++)
      {
             dibujarpuntos(i);          
      printf("%i\n");
      }
      getch();
}
void dibujarpuntos(int numpuntos)
{
     int i;
     for(i=1;i<=numpuntos;i++)
     {
     printf(".");
     }
}
     
     
      
