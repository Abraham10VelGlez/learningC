#include <stdio.h>
#include <conio.h> 


int n;

int potencias();
int potencias()
{

puts(" numero\t     exp2\t     exp3\t     exp4");

puts("------\t    -----\t    -----\t    -----");

for (n=0; n<=10; ++n)

printf("%2d\t    %5d\t    %5d\t    %5d\n",n,n*n,n*n*n,n*n*n*n);

}

main()
{
potencias();

getch();
}
