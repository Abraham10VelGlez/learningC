#include<stdio.h> 
#include<conio.h>
main() 
{ 
            int i;
            printf("Introduzca n�mero:");
    scanf("%d",&i);

    if (i%2==0) {
       printf("Es par.");
    }
    else
    {
       printf("Es impar.");
    }
   getch();
}
