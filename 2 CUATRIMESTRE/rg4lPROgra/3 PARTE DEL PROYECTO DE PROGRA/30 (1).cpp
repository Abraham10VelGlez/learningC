//30.	Generar la serie: 1, 5, 3, 7, 5, 9, 7, ..., 23

#include <stdio.h>
#include <conio.h>
 int serie=1;
    bool sw=true;
    int ser();
    int ser()
    {
	printf("\n\n GENERAR LA SERIE: 1, 5, 3, 7, 5, 9, 7, ..., 23 \n \n");
   
    do
    {
      printf("%d, ",serie);
      if (sw) serie+=4;
      else serie-=2;
      sw=!sw;
    } while (serie<=23);
    getch();
}
 main ()
 {
 ser();	
 getch();	
 }
 
 
 
