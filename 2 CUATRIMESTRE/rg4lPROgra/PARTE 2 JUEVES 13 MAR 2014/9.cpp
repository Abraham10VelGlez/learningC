#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int mi_reloj(int h,int min,int s); 
int mi_reloj(int h,int min,int s)
{
   for( h=1; h<=12; h++)
  {
        for( min=1; min<=30; min++)
  {
        for( s=1; s<=59; s++)
  {
        
printf("\n son las %d horas: con %d min : con %d seg\n",h,min,s);                                  
}
}
}             
}   
main()
{
int h,min,s; 
mi_reloj(h,min,s);
system("pause");
getche();

}
