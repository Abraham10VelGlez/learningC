#include <stdio.h>
#include <conio.h>
 main()
 {
double x,y,z;
printf("Escribe el primer número");
scanf("%lf",&x);
printf("Escribe el segundo número");
scanf("%lf",&y);
printf("Escribe el tercer número");
scanf("%lf",&z);
if(x>y && x>z) 
{ 
if(y>z) printf("\t%lf\t%lf\t%lf", x, y, z);
else printf("\t%lf\t%lf\t%lf", x, z, y);
} 
else if (y>x && y>z) 
{ 
if (x>z) printf("\t%lf\t%lf\t%lf", y, x, z);
else printf("\t%lf\t%lf\t%lf", y, z, x);
}
else 
{ 
if (x>y) printf("\t%lf\t%lf\t%lf", z, x, y);
else printf("\t%lf\t%lf\t%lf", z, y, x);

}
getch();
}
