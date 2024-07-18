#include<stdio.h>
#include<conio.h>

int i,j;

int genera();
int genera()

{
	
	
	int mat[3][4]={{01,02,03,04},{8,07,06,05},{9,10,11,12}};
	
	for(i=0;i<=2;i++)
    {
    	for(j=0;j<=3;j++)
    {
    
   printf("\t%d",mat[i][j]);
    
	}	
	printf("\n\n");
	printf("\n\n");
    }  
}
main()
{
      genera();
      getch();

}
