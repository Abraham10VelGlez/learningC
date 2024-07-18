#include <stdio.h>
#include <conio.h>

int main(){
int x;
double fact=1;
printf("Escriba el número: ");
scanf("%i",&x);

while(x>1) fact*=x--;

printf("Factorial =%lf",fact);
getch();
}
