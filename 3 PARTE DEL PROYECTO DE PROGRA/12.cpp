#include<conio.h>
#include<stdio.h>

int tablas(int a,int res,int x);

int tablas(int a,int res,int x)
 {    
    printf("INGRESA EL NUMERO DE LA TABLA:");
    scanf("%d",&x);
    for(a=1;a<=15;a++)
{    
res=x*a;
printf("\n MOSTRAR TABLA:%d x %d= %d\n",x,a,res);
                     }
                     }
main()
{
int a,res,x;
tablas (a,res,x);
getch ();
}
                     
                           

