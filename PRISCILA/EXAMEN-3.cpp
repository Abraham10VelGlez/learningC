 #include<conio.h>
  #include<stdio.h>
  #include<windows.h>

 
	int vec[2];
	char opcion;
  
  int pares(int x[2])
  {
	for(int i=x[0];i<x[1];i++)
    {
		if(i%2==0)
		
        printf("\n\t%d",i);
		
        else
		
        printf("\n\n");
		
	}
}
int impares(int x[2])
{
	for(int i=x[0];i<x[1];i++)
    {
		if(i%2==0)
		
		printf("\n");
		
        else
		
        printf("\n\t%d",i);
		
	}
}
main()
{
      system("color 79");
      
	for(int i=0;i<2;i++)
    {
		printf("Ingresa numero %d:   ",i+1);
		scanf("%d",&vec[i]);	
	}
	
	printf("\n\n\t ESCOGE QUE LA OPCION\n\n\t(p)=PARES\t(i)=IMPARES:  \n   ");
	scanf("%s",&opcion);
	
	if(opcion=='p')
	pares(vec);
    if(opcion=='i')
	impares(vec);
	
	getch();
}


       
