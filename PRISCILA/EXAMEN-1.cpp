#include<conio.h>
#include<stdio.h>
#include<windows.h>
     
int m=0,cx=0,cy=0,piso[6][4];
	char a='A',b='B',c='C',d='D';


    
int llenar(int x[6][4])
{
	for(int i=0;i<6;i++)
    {
		for(int j=0;j<4;j++)
        {
			printf("\tEN EL PISO %d:  ",i+1,j+1);
			scanf("%d",&x[i][j]);
			
			if(x[i][j]>m)
            {
			m=x[i][j];
			cx=i;
			cy=j;
   }
   }
		printf("\n");
	}
    }
    int imprimir(int x[6][4])
{    

	for(int i=0;i<6;i++)
    {
		for(int j=0;j<4;j++)
        {
			printf("\t%d",x[i][j]);
		}
		printf("\n\n");
    }
    }

main()
{
	system("color 79");

	printf("INGRESA NUMERO DE HABITANTES EN CADA PISO:\n\n");
	llenar(piso);
	printf("\n\n\n");
    imprimir(piso);	
	if(cy==0)
	printf("\n\t VIVIENDA CON MAYORES HABITANTES:\n\n   Piso %d, puerta %c con: %d habitantes",cx+1,a,m);
	if(cy==1)
	printf("\n\t VIVIENDA CON MAYORES HABITANTES:\n\n   Piso %d, puerta %c con: %d habitantes",cx+1,b,m);
	if(cy==2)
	printf("\n\t VIVIENDA CON MAYORES HABITANTES:\n\n   Piso %d, puerta %c con: %d habitantes",cx+1,c,m);
	if(cy==3)
	printf("\n\t VIVIENDA CON MAYORES HABITANTES:\n\n   Piso %d, puerta %c con: %d habitantes",cx+1,d,m);

	getch();	
}
