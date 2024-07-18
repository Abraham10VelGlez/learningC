#include <iostream.h> 
int mes; 
void main() 
{ 
         cout<<Teclea el mes&quot<<endl;
 cin>>mes; (continua)
switch (mes)
 { 
    case 1: 
    case 3: 
    case 5: 
    case 7: 
    case 8:
     case 10: 
    case 12: cout<<31 dias<<endl; 
// el break va hasta después del 12 pues si fue cualquiera de estos meses tiene 31 break; 
// días, y al encontrar el break sale del switch, si no fue ninguno sigue revisando 
case 2: cout<<&quot;28 o 29 dias&quot;<<endl;
 break; 
case 4: 
    case 6:
     case 9:
     case 11: cout<<&quot;30 dias&quot;<<endl;
 break; 
default: cout<<&quot;ERROR&quot;; 
}; 
}
