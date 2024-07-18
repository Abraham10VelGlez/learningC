#include <stdio.h>
#include <conio.h> 
 
int i; 

int impares();
int impares()
{
    
for(i=1;i<100;i++)
{ 
if((i%2)!=0) 
{
             printf("LOS IMPARES SON:");
             for(i=1;i<100;i++)
{ 
printf("%d\t\n",i);
}
}
}
}
main()
{
      impares();
getch(); 
}


 




