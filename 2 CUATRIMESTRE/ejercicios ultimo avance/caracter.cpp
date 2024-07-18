#include<stdio.h>
#include<conio.h>


main()
{
	
	char cran;
	int rep,num=0;
	
	printf("ingresa el numero de repeticiones");
	scanf("%d",&rep);
	
	printf("ingresa el caracter q se repetira");
	scanf("%c",&cran);
	
	
	do
	{
		printf("%c",cran);
	}
	while(num>=rep);
	
	
	
	getch();
}
