/* 1.- Se requiere controlar el numero de habitantes de un edificio con 6 pisos y 4 puertas (A, B, C y D) en cada iso.
Realizar un programa que pida al usuario que introduzca el numero de habitantes de cada puerta del edificio.
El programa debe decir la vivienda (piso y puerta) que mas habitantes tiene del edificio.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int m=0;
int cx=0;
int cy=0;

int imprimir(int x[6][4]){    

	for(int i=0;i<6;i++){
		for(int j=0;j<4;j++){
			printf("\t%d",x[i][j]);
		}
		printf("\n\n");
    }}
    
int llenar(int x[6][4]){
	for(int i=0;i<6;i++){
		for(int j=0;j<4;j++){
			printf("\tPiso %d:  ",i+1,j+1);
			scanf("%d",&x[i][j]);
			
			if(x[i][j]>m){
			m=x[i][j];
			cx=i;
			cy=j;
   }}
		printf("\n");
	}}

main(){
	int piso[6][4];
	char a='A';
	char b='B';
	char c='C';
	char d='D';

	printf("Ingresa el numero de habitamtes en cada piso\n\n");
                       	llenar(piso);
	printf("\n\n\n");
	printf("\tA\tB\tC\tD\n\t__________________________\n\n");
	
    imprimir(piso);	
	if(cy==0)
	printf("\n\n\n\tLa vivienda con mayor habitantes es:\n\n   Piso %d, puerta %c con: %d habitantes",cx+1,a,m);
	if(cy==1)
	printf("\n\n\n\tLa vivienda con mayor habitantes es:\n\n   Piso %d, puerta %c con: %d habitantes",cx+1,b,m);
	if(cy==2)
	printf("\n\n\n\tLa vivienda con mayor habitantes es:\n\n   Piso %d, puerta %c con: %d habitantes",cx+1,c,m);
	if(cy==3)
	printf("\n\n\n\tLa vivienda con mayor habitantes es:\n\n   Piso %d, puerta %c con: %d habitantes",cx+1,d,m);

	getch();	
}
