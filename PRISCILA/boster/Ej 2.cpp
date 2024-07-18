#include<stdio.h>
#include<conio.h>
int imp(int x[2]){
	for(int i=x[0];i<x[1];i++){
		if(i%2==0)
		printf("\n");
		else
		printf("%d",i);
		
	}
}
main(){
	int vec[2];
	for(int i=0;i<2;i++){
		printf("Ingresa numero %d:   ",i+1);
		scanf("%d",&vec[i]);	
	}
	imp(vec);
	getch();
}
