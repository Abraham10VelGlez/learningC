#include <iostream.h>
#include <conio.h>
main()
{
char ch;
int num_rep,i=1;
cout<<"Escriba el caracter a repetir: ";
cin>>ch;
cout<<"\n"<<"Escriba el numero de repeticiones: ";
cin>>num_rep;
if (num_rep>0)
{
while(i<=num_rep)
{
cout<<ch;
cout<<"\n";
i++;
}

}
cout<<"\n";
getch();
}
