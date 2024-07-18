#include<iostream>
#include<conio.h>

int dia, mes, anio;

char resp;

int main()

{
       cout<<"Teclea el dia"<<endl;

       cin>>dia;

       cout<<"Teclea el mes"<<endl;

       cin>>mes;

       cout<<"Teclea el anio"<<endl;

       cin>>anio;

       cout<<dia<<" de ";

switch (mes)

       {

              case 1: cout<<"Enero"; 
              break;

              case 2: cout<<"Febrero"; 
              break;

              case 3: cout<<"Marzo";
               break;

              case 4: cout<<"Abril";
               break;

              case 5: cout<<"Mayo";
               break;

              case 6: cout<<"Junio";
               break;

              case 7: cout<<"Julio";
               break;

              case 8: cout<<"Agosto"; 
              break;

              case 9: cout<<"Septiembre"; 
              break;

              case 10: cout<<"Octubre"; 
              break;

              case 11: cout<<"Noviembre"; 
              break;

              case 12: cout<<"Diciembre";
               break;

              default: cout<<"ERROR";

       }
 cout<<" de "<<anio<<endl<<endl;

}  

