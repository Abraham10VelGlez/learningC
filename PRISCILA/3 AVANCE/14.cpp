#include <stdio.h>
#include <conio.h> 
 
int bb; 

int impares();
int impares()
{
    
for(bb=1;bb<100;bb++)
{ 
if((bb%2)!=0) 
{
             printf("LOS IMPARES SON:");
             for(bb=1;bb<100;bb++)
{ 
printf("%d\t\n",bb);
}
}
}
}
main()
{
      impares();
getch(); 
}


 




