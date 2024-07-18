#include <stdio.h>
#include <conio.h>
main () 
{
     int num[10],n,a,suma=0;
n=10;
  printf("ingresa 10 numeros\n");
  for(a=1;a<=10;a++)
  {
                    printf("ingresa el %d, numero\t",a);
                    scanf("%d",&num[a]);
                    if(num%2=0)
                    {
                                suma=suma+num[a];
                                }
}
  
 
    
    getch();
}
