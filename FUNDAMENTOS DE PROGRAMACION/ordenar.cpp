#include<stdio.h>
#include<conio.h>
main()
{
 int temp;
 int arreglo[10]={8,4,2,9,6,3,5,7,1,10};
 for (int b=0;b<11;b++)
 { 
   for (int i=0;i<8;i++)
   {
  if (arreglo[i+1]<arreglo[i])
  {
   temp=arreglo[i];
   arreglo[i]=arreglo[i+1];
   arreglo[i+1]=temp;
   
  }
   }
    }
    printf("\nOrdenamiento de claves");
 for (int x=0;x<10;x++)
 {
  printf("\n%d",arreglo[x]);
 }
 getch();
}
