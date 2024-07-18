#include<stdio.h>
#include<conio.h>
main()
{
    int mat[3][3], i=0, j=0;
    for(j=0;j<3;j++)
    {
    for(i=0;i<3;i++)
    {
      printf("digita el valor %d %d \n" ,i+1,j+1);
      scanf("%d",&mat[i][j]);
    }
    }
      for(j=0;j<3;j++)                      
      {
      for(i=0;i<3;i++)
      {
      printf("%d \n", mat[i][j]);
      }
      }
      getch();
}                                                  
