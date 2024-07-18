#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int a=10;
    int*puntero;
    puntero=&a;
    printf("el valor de a es:%d\n","el valor del puntero es:%d");
    printf("el valor de * puntero es: %d\n",a,*puntero);
    printf("la direccion de memoria de * puntero es:%.2p",puntero);
    system("pause");
    return 0;
}
