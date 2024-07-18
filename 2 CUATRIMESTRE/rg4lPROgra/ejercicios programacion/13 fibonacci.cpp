#include <stdio.h>
#include<conio.h>
int main(){
int f1=1,f2=1;
int n,cont;
double res=1; 

do{
printf("Escriba el número: ");
scanf("%d",&n);
if(n<=0) printf("Numero no valido\n");
}while(n<=0);

for(cont=3;cont<=n;cont++){
res=f1+f2;
f1=f2;
f2=res;
}

printf("Resultado: %.0f",res);
getch();
}
