#include <iostream.h>
#include <conio.h>
main()
{int a[10],b[10],c[10],i,k=0,h=0;
 for(i=0;i<10;i++)
 {cout<<"\n Ingrese a["<<i<<"]=";
  cin>>a[i];
 }
 for(i=0;i<10;i++)
 { if(a[i]%2==0)
   {b[k]=a[i];k++;}
   else
   {c[h]=a[i];h++;}
 }
 cout<<"\nLos pares son:";
 for(i=0;i<k;i++)
 cout<<"\nb["<<i<<"]="<<b[i];
 cout<<"\nLos impares son:";
 for(i=0;i<h;i++)
 cout<<"\nc["<<i<<"]="<<c[i];
   getch();
  return 0;
}
