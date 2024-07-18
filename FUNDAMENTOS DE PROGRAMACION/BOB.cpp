#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
typedef struct estetica{
	char nom[30];
	char tie[10];
	struct estetica *ant;
	
}caf;

caf *cabeza;
caf *ult;
caf *nuevo();
void encolar(char [30]);
void lista(caf *cabeza);
void desencolar(void);
int cr=0;

void encolar(char x[30]){
	
	caf *aux=nuevo();
	aux->ant=NULL;
	strcpy(aux->nom,x);
	
	if(cabeza==NULL){
		cabeza=aux;
		
	}else{
		ult->ant=aux;
	}
	ult=aux;
}

void lista(caf *cabeza){
	system("color 90");

	int di=0;

	printf("\n\n\t\t%s\t\tsillon",cabeza->nom);
	caf *aux=cabeza->ant;
	if(cr>4){
	
	while(aux!=NULL){
		di++;
		if(di<=4)
		printf("\n\n\t\t%s\t\tsillon",aux->nom);
		else
		printf("\n\n\t\t%s\t\tparado",aux->nom);
		
		aux=aux->ant;
	}
	}else{
		while(aux!=NULL){
		
		printf("\n\n\t\t%s\t\tsillon",aux->nom);
		aux=aux->ant;
	}
		
	}
}

void desencolar(void){
	cr--;
	cr--;
	caf *aux;
	char y[30];
	
	aux=cabeza;
	strcpy(y,aux->nom);
	cabeza=cabeza->ant;
	free(aux);
}

caf *nuevo(){
	caf *q=(caf *)malloc(sizeof(caf));
	if(q==NULL){
		printf("\n\n\n\t\tMEMORIA INSUFICIENTE");
		getch();
		exit(0);
	}
	return q;
}


main(){

	int menu;
	cabeza=NULL;
	ult=NULL;
	char txt[30];
	int opc;
	do{
		system("color 07");
		system("cls");
		printf("\n\n\n\t\t\t\testetica academia lupita");
		printf("\n\n\n\n\t\t(1)FORMARSE\t\t(2)CORTE DE CABELLO\n(3)VER PERSONAS EN ESPERA");
		printf("\n\n\n\t\t(4)Cerrar   ");
		scanf("%d",&opc);
		if(opc==1){
			cr++;
		if(cr>8){
			printf("ya no hay espacio en la estetica");
		}else{
			
			printf("\n\n\n\t\tIngrese su nombre:   ");
			scanf("%s",&txt);
						
			printf("\n\n\n\t\tseñor %s espere su turno, por favor.",txt);
			
			getch();
			encolar(txt);
			}
		}else if(opc==2){
			system("cls");
			if(cabeza!=NULL){
				printf("\n\n\n\t\tCORTANDO EL CABELLO AL SEÑOR %s, ",cabeza->nom);
				desencolar();
			}else{
				printf("\n\n\n\t\tNO HAY CORTES PENDIENTES ");
			}
			getch();
		}else if(opc==3){
			system("cls");
			printf("\n\n\n\t\t\tSALA DE ESPERA\n\n\n");
			if(cabeza!=NULL)
			lista(cabeza);
			else
			printf("\n\n\n\t\tNo hay cortes pendientes ");
			getch();
		}
	}while(opc!=4);
	printf("\n\n\n\n\t\t\testetica sierra en 5 seg");
	Sleep(5000);
}


