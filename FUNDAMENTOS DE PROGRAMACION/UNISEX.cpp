#include<conio.h>
#include<stdio.h>
#include<windows.h>
typedef struct estetica{
	char nom[10];
	struct estetica *psig;
	
}unisex;

unisex *cbz;
unisex *nuevo();
unisex *ultimo;


void encolar(char [10]);
void lista(unisex *cabeza);
void desencolar(void);
int hulk=0;

void encolar(char x[10]){
	
	unisex *aux=nuevo();
	aux->psig=NULL;
	strcpy(aux->nom,x);
	
	if(cbz==NULL){
		cbz=aux;
		
	}else{
		ultimo->psig=aux;
	}
	ultimo=aux;
}
unisex *nuevo(){
	unisex *d=(unisex *)malloc(sizeof(unisex));
	if(d==NULL){
		printf("\n ESTA LLENA");
		getch();
		exit(0);
	}
	return d;
}
void desencolar(void){
	hulk--;
	hulk--;
	unisex *aux;
	char y[10];
	
	aux=cbz;
	strcpy(y,aux->nom);
	cbz=cbz->psig;
	free(aux);
}
void lista(unisex *cbz){
	system("color 90");
int di=0;

	printf("\n\n\t\t%s\t\tsillon",cbz->nom);
	unisex *aux=cbz->psig;
	if(hulk>4){
	
	while(aux!=NULL){
		di++;
		if(di<=4)
		printf("\n\n\t\t%s\t\tsillon",aux->nom);
		else
		printf("\n\n\t\t%s\t\tparado",aux->nom);
		
		aux=aux->psig;
	}
	}else{
		while(aux!=NULL){
		
		printf("\n\n\t\t%s\t\tsillon",aux->nom);
		aux=aux->psig;
	}
		
	}
}


main(){

	int menu;
	cbz=NULL;
	ultimo=NULL;
	char cliente[10];
	int yan;
	do{
		system("color a1");
		system("cls");
		printf("\n\n\n\t \2\4\6 BABERIA DE YANDEL \2\4\6");
		printf("\n\n\n\n(1)FORMARSE\n(2)CORTE DE CABELLO\n(3)VER PERSONAS EN ESPERA\n(4)Cerrar   ");
		scanf("%d",&yan);
		if(yan==1){
			hulk++;
		if(hulk>8){
			printf(" YA NO AHY ESPACIO EN LA ESTETICA");
			getch();
		}else{
			
			printf("\n\tNOMBRE:   ");
			scanf("%s",&cliente);
						
			printf("\n\t SEÑOR(a) %s ESPERE SU TURNO, X FAVOR .",cliente);
			
			getch();
			encolar(cliente);
			}
		}else if(yan==2){
			system("cls");
			if(cbz!=NULL){
				printf("\n\tCORTANDO EL CABELLO AL SEÑOR(A)  %s..... ",cbz->nom);
				desencolar();
			}else{
				printf("\n\tNO HAY CORTES PENDIENTES ");
			}
			getch();
		}else if(yan==3){
			system("cls");
			printf("\n\tSALA DE ESPERA\n\n\n");
			if(cbz=NULL)
			lista(cbz);
			else
			printf("\n\t NO AHY CLIENTES");
			getch();
		}
	}while(yan!=4);
	printf("\n\n\t !!!LINDO PEINADO GRACIAS X VENIR.........!!!");
	getch();
}


