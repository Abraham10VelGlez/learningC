#include<conio.h>
#include<stdio.h>

    int veces = 0, li = 0; 
    char caracter; 
    
    int repita();
    int repita()
    
    {
        printf("Escribe un caracter: "); 
scanf("%c", &caracter);
 
printf("Escribe el numero de veces que se repetira: "); 
scanf("%d", &veces);
 
do{ 

printf("\n%c",caracter); 

li++; 

}
while(li<veces);
}
main()
{
      repita();
      
      getch();
      return 0;
      }
        
