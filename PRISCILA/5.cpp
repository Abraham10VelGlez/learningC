//Ejemplo: Sea 7458, se debe enviar como 8547

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int a,b,c,d;
int main()
{
printf("\ningrese el primer numero de su contrase�a");
scanf("%d",&a);
printf("\ningrese el segundo numero de su contrase�a");
scanf("%d",&b);
printf("\ningrese el tercero numero de su contrase�a");
scanf("%d",&c);
printf("\ningrese el cuarto numero de su contrase�a");
scanf("%d",&d);
printf("\nencriptando contrase�a");
printf("\nsu contrase�a es:%d,%d,%d,%d\t",d,c,b,a);
system("pause");
return 0;
}
