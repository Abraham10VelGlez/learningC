#include <stdio.h>
#include<conio.h>
#define INI 33
#define FIL 15
#define COL 20
main()
{
      {
int k, kk, i;
for (k=1; k<FIL; k++)
{
if (k==1) printf ("\t\t\t\t TABLA ASCII\n\t\t*******preciona enter para la siguiente lista de caracteres*****\n");
else printf("\n");
for (i=1; i<=COL; i++)
{
kk=INI+(k-1)*COL+i;
if (kk>255) break;
printf(" %c",kk);
}
printf("\n");
for (i=1; i<=COL; i++)
{
kk=INI+(k-1)*COL+i;
if (kk>255) return(1);
if (kk<100) printf(" %d",kk);
}
getch();
}
getch();
}
getch();
}
