 #include<conio.h>
  #include<stdio.h>
  #include<windows.h>

  int f,c,mat[5][5];
  
  int diagonales();
  int diagonales()
  
  {
      for(f=0;f<5;f++)
      {
                      for(c=0;c<5;c++)
                      {
                                      printf("en la posicion %d,%d el numero es:",f,c);
                                      scanf("%d",&mat[f][c]);
                                      }
                                      printf("\n");
                                      }
                                      mat[0][0]=0;
                                      mat[1][1]=0;
                                      mat[2][2]=0;
                                      mat[3][3]=0;
                                      mat[4][4]=0;
                                      
                                      mat[0][4]=0;
                                      mat[1][3]=0;
                                      mat[2][2]=0;
                                      mat[3][1]=0;
                                      mat[4][0]=0;
                                      
                                       printf("_____________--:MI MATRIZ CON DIAGONALES EN CEROS ES:--___________\n");
                                       
                                        for(f=0;f<5;f++)
      {
                      for(c=0;c<5;c++)
                      {
                                      printf("%d\t",mat[f][c]);
                                      }
                                      printf("\n");
                                      }
                                      }
                                      main()
                                      {
                                             system("color 79");
                                            diagonales();
                                            getch();
                                            }
                                            
