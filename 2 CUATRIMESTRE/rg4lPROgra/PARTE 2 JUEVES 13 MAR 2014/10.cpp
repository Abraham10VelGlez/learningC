#include<conio.h> 
#include<stdio.h>


int z,b,cc,orden; 

int ord();
int ord()
{

    printf("\t INGRESA TRES NUMEROS: \t");
    
printf("PRIMER NUMERO:\n"); 
scanf("%d",&z); 
printf("SEGUNDO NUMERO:\n"); 
scanf("%d",&b); 
printf("TERCER NUMERO:\n"); 
scanf("%d",&cc); 
if(z>b) 
{
        orden=z; 
z=b; 
b=orden; 
} 
if(z>cc) 
{
        orden=z; 
z=cc; 
cc=orden; 
} 
if(b>cc) 
{
        orden=b; 
b=cc; 
cc=orden; 
} 
printf("\tLOS DATOS ORDENADOS SON\t:"); 
printf("\n1er:%d\n ",z); 
printf("\n2do:%d\n ",b); 
printf("\n3er:%d\n ",cc);
}

main()
{
      ord();
      getch();
      }
