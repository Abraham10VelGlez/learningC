#include<conio.h>
#include<stdio.h>

int tablas(int f,int res,int x);

int tablas(int f,int res,int x)
 {    
    printf("INGRESA EL NUMERO DE LA TABLA");
    scanf("%d",&x);
    for(f=1;f<=10;f++)
{    
res=x*f;
printf("\n MOSTRAR TABLA:%d x %d= %d\n",x,f,res);
                     }
                     }
main()
{
int f,res,x;
tablas (f,res,x);
getch ();
}
                     
                           

