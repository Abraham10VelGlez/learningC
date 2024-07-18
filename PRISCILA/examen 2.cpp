#include<conio.h>
#include<stdio.h>
#include<windows.h>
int matriz()
{
	int matriz[4][4],i,j=0,vector[4];
	printf("\n\t***MATRIZ***\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d,%d:",i,j);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<1;j++)
		{
			vector[i]=matriz[i][j+i];
		}
	}
	printf("\n\t***VECTOR***\n");
	for(i=0;i<4;i++)
	{
		printf(" posicion%d=%d\n",i,vector[i]);
	}
}
main()
{
	system("color 3a");
    matriz();
	getch();
	return 0;
}

