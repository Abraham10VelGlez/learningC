/*22.	Escriba un programa que dándole el importe exacto de 
una cantidad te indica el mínimo número de monedas que podrías tener.
 Las monedas son de 1, 5, 10.*/

#include <stdio.h>
#include <conio.h>
int cantidad, mone; 
float conmoneda, pagacon,precio; 
int pro();
int pro()
{ 
printf("\n\nPROGRAMA QUE DANDOLE EL IMPORTE EXACTO DE \nUNA CANTIDAD TE INDICA NUMERO DE MONEDAS QUE PODRIAS TENER");
printf("\n\nPrecio del Articulo: "); 
scanf("%f",&precio); 
printf("\n\nPaga con: "); 
scanf("%f",&pagacon); 
conmoneda=pagacon-precio; 
printf("VUELTO A ENTREGAR %4.2f",conmoneda); 
cantidad=conmoneda; 
mone=100*(conmoneda-cantidad); 


printf("\n\nMONEDAS "); 
printf("\nLa cantidad de monedas de %5d es %5d",1,cantidad/1); 


cantidad=mone; 

printf("\nLa cantidad de monedas de %5d es %5d",10,cantidad/10); 

cantidad=cantidad%10; 
printf("\nLa cantidad de monedas de %5d es %5d",5,cantidad/5); 
 
cantidad=cantidad%5; 
printf("\nSALDO EN CENTAVOS %5d",cantidad); 
getchar(); 
printf("\n\n"); 
 

} 

 main() 
{
pro();	
getch();	
}
 






