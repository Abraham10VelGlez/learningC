#include<stdio.h>
#include<conio.h>

void Mostrar(int*, int);
void Intercambia(int*, int*);

int main()
{
    int vector[6] = { 1,2,3,4,5,6 };
    int *p, *q;
printf("los numeros son:\n");
    Mostrar(vector, 6);
    p = vector;    
    q = &vector[5]; 

    while(p < q) {  
        
		Intercambia(p++, q--);
    }
    printf("el intercambio es:\n");
	Mostrar(vector, 6);
	getch();
    return 0;
}

void Mostrar(int *v, int n) 
{
    int *f = &v[n]; 
    while(v < f) {
        printf("%d",*v);
        v++;
    }
    printf("\n");
}

void Intercambia(int *p, int *q) 
{	
    *p += *q;
    *q = *p-*q;
    *p -= *q;
}


