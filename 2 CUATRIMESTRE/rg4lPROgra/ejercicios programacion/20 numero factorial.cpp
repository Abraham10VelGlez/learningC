#include <stdio.h>
#include<conio.h>
main()
{
int i, numero, factorial=1;
printf("escriba un numero para calcular su factorial: ");
scanf("%d",&numero);
for (i=numero; i>1; --i) factorial *= i;
printf("\n%d = %d\n",numero,factorial);
getch();
}
