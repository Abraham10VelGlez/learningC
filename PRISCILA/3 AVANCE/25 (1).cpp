#include <stdio.h>
#include<conio.h>
void LimpiaPantalla(int n);

int copo();
int copo()

{
int numlin=30;
LimpiaPantalla(numlin);
getch();

}

void LimpiaPantalla(int n)

{

while (n-- >0) putchar('\n');

}
main()
{

    copo();
      getch();
      }
      
