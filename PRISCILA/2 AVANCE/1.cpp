#include<conio.h>
#include<stdio.h>


//desea sabes un alva�il de que tama�o es el area de una barda de una casa por medio de una formula b*h, crear programa que aga una division para que ayudes a el alva�il
float al(float y,float m,float div);
float al(float y,float m,float div)
{   
     printf("SR. ALVA�IL INGRESE MEDIDA UNO DE LARGO:"); scanf("%f",&y);
     printf("SR. ALVA�IL INGRESE MEDIDA DOS DE ALTO:"); scanf("%f",&m);
     div=y/m;
     printf("EL TAMA�O DE LA BARDA ES DE %.2f ",div);
     }
     main() 
     {
     float y,m,div;
     al(y,m,div);
     getch();
}
 
