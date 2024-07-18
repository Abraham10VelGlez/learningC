#include<conio.h>
#include<stdio.h>


//desea sabes un alvañil de que tamaño es el area de una barda de una casa por medio de una formula b*h, crear programa que aga una division para que ayudes a el alvañil
float al(float y,float m,float div);
float al(float y,float m,float div)
{   
     printf("SR. ALVAÑIL INGRESE MEDIDA UNO DE LARGO:"); scanf("%f",&y);
     printf("SR. ALVAÑIL INGRESE MEDIDA DOS DE ALTO:"); scanf("%f",&m);
     div=y/m;
     printf("EL TAMAÑO DE LA BARDA ES DE %.2f ",div);
     }
     main() 
     {
     float y,m,div;
     al(y,m,div);
     getch();
}
 
