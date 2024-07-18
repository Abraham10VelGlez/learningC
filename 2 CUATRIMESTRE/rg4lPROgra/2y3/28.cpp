//28. Un censador recopila ciertos datos aplicando encuestas para el último Censo Nacional de Población y Vivienda. Desea obtener de todas las personas que alcance a encuestar en un día, que porcentaje tiene estudios de primaria, secundaria, carrera técnica, estudios profesionales y estudios de posgrado. 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

void main() 
{ 
int option,x=1,opt1=0,opt2=0,opt3=0,opt4=0,opt5=0,opt6=0,gotoxy; 
float por1,por2,por3,por4,por5,por6; 

cout<<"\n\nNiveles educativos: \n\n1. Primaria. \n2. Secundaria." 
<<"\n3. Carrera Tecnica. \n4. Estudios Profecionales." 
<<"\n5. Estudios de Posgrado. \n6. Ninguno." 
<<"\n\nDigite (de 1 a 6) la respuesta (negativo para finalizar censo)"; 
while (true) 
{ 
gotoxy(35,1); cout<<"ENCUESTA # " < gotoxy(64,12); cin>>option; 
if (option>=0) 
if (option==1) 
{ 
x++; opt1++; 
} 
else 
if (option==2) 
{ 
x++; opt2++; 
} 
else 
if (option==3) 
{ 
x++; opt3++; 
} 
else 
if (option==4) 
{ 
x++; opt4++; 
} 
else 
if (option==5) 
{ 
x++; opt5++; 
} 
else 
if (option==6) 
{ 
x++; opt6++; 
} 
else 
{ 
cout<<"Opci¢n invalida (presione" 
<<" una tecla para continuar)"; 
getch(); 
gotoxy(1,13); cout<<" " 
<<" "; 
} 
else 
break; 
gotoxy(64,12); cout<<" "; 
} 

por1=opt1*100./(x-1); 
por2=opt2*100./(x-1); 
por3=opt3*100./(x-1); 
por4=opt4*100./(x-1); 
por5=opt5*100./(x-1); 
por6=opt6*100./(x-1); 
cout<<"NIVEL EDUCATIVO PORCENTAJE DE LA POBLACIÒN" 
<<"\n\nPrimaria " << por1 
<<"\nSecundaria " << por2 
<<"\nCarrera Tecnica " << por3 
<<"\nEstudios de Profesional " << por4 
<<"\nEstudios de posgrado " << por5 
<<"\nNinguno " << por6; 
getch(); 
} 

