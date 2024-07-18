#include<stdio.h>
#include<conio.h>


main()

{

int bob[4][4],j,i,x,vec[4];


for(j=0;j<4;j++)
{

for(i=0;i<4;i++)
{

printf("ingresa los valores de ka matriz");
scanf("%d%\t",&bob[j][i]);
}
}

for(j=0;j<4;j++)
{

for(i=0;i<4;i++)
{

	
printf("%d%",bob[j][i]);
}

printf("\n");
}

printf("\n\t");
printf("\n\t");
printf("\n");



bob[0][0]=0;
bob[1][1]=0;
bob[2][2]=0;
bob[3][3]=0;

bob[0][3]=0;
bob[1][2]=0;
bob[2][1]=0;
bob[3][0]=0;


for(j=0;j<4;j++)
{

for(i=0;i<4;i++)
{

printf("\t%d",bob[j][i]);
}
printf("\n");
}










getch();
}
