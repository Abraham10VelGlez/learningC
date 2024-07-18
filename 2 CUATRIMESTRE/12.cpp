#include<conio.h>
#include<stdio.h>

int tablas(int t,int resu,int u);

int tablas(int t,int resu,int u)
 {    
    printf("INGRESA EL NUMERO DE LA TABLA:");
    scanf("%d",&u);
    for(t=1;t<=15;t++)
{    
resu=u*t;
printf("\n MOSTRAR TABLA:%d x %d= %d\n",u,t,resu);
                     }
                     }
main()
{
int t,resu,u;
tablas (t,resu,u);
getch ();
}
                     
                           

