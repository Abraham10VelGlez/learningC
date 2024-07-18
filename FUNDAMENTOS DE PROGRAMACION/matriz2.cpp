#include<stdio.h>
#include<conio.h>
main()
{
      int mat[3][3], i=0, j=0, x=0;
      for(j=0;j<3;j++)
      {
      for(i=0;i<3;i++)
      {
        printf("DIGITA EL VALOR \n");
        scanf("%d", &mat[i][j]);
        }
        }
        for(j=0;j<3;j++)
        {
        for(i=0;i<3;i++)
        {            
        if(i==j)
        {
        printf("%d", mat[i][j]);
        }
        }
        }
        getch();
        }
                             
