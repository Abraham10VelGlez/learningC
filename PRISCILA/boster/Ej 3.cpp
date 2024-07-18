#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int par(int x[2]){
	for(int i=x[0];i<x[1];i++){
		if(i%2==0)
		printf("\n\t%d",i);
		else
		printf("\n");
		
	}
}
int imp(int x[2]){
	for(int i=x[0];i<x[1];i++){
		if(i%2==0)
		printf("\n");
		else
		printf("\n\t%d",i);
		
	}
}
main(){
	int vec[2];
	char opc;
	for(int i=0;i<2;i++){
		printf("Ingresa numero %d:   ",i+1);
		scanf("%d",&vec[i]);	
	}
	system("cls");
	printf("\n\n\n\t\tIngresa una opcion\n\n\t(p)Pares\t(i)Impares     ");
	scanf("%s",&opc);
	if(opc=='i')
	imp(vec);
	if(opc=='p')
	par(vec);
	
		
		
		
	getch();
}
