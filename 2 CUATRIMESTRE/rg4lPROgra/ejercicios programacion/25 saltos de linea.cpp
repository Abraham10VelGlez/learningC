#include <stdio.h>
#include<conio.h>
void LimpiaPantalla(int n);

main()

{

int numlin=30;

LimpiaPantalla(numlin);
getch();

}

void LimpiaPantalla(int n)

{

while (n-- >0) putchar('\n');

}
