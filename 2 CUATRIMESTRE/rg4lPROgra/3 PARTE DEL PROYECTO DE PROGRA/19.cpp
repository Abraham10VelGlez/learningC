#include <stdio.h>
#include <conio.h> 


int nn;

int potencias();
int potencias()
{

puts(" numero\t     exp2\t     exp3\t     exp4");

puts("------\t    -----\t    -----\t    -----");

for (nn=0; nn<=10; ++nn)

printf("%2d\t    %5d\t    %5d\t    %5d\n",nn,nn*nn,nn*nn*nn,nn*nn*nn*nn);

}

main()
{
potencias();

getch();
}
