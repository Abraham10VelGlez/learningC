#include<stdio.h>
#include<stdlib.h>

void print2(int x)
{
     printf("has comentado %d",x);
     }
     
     int print3(int x)
     {
         printf("2%d=%d",x,2*x);
         return 2*x;
         }
         
         int main(int argc,char * argv[])
         {
             int(*funcion)(int);
             void(*funcion2)(int);
             
         funcion=&ptint3;
         funcion2=&ptint2;
         int val=(*funcion)(s);
         (*func2)(val);
         system("pause");
         return 0;
         }
         
         
             
             
