#include<conio.h>
#include<stdio.h>

main()
{

int numm=0;
printf("Cuantos Numeros? ");
scanf(" %i",&numm);
int vec[numm];
for(int a=0;a<numm;a++){

printf("Teclea Numero %i de %i:",(a+1),numm);
scanf(" %i",&vec[a]);
}

int aux2;

for(int b2=0;b2<numm;b2++){
for(int b=0;b<numm;b++){

      if(vec[b]>vec[b+1]){
      int aux=vec[b];
	   vec[b]=vec[b+1];
	   vec[b+1]=aux;
        
	  }}


}

for(int b=0;b<numm;b++){

    
printf("\n%i",vec[b]);
}



getch();
}
 
