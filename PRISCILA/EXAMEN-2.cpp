 #include<conio.h>
  #include<stdio.h>
  #include<windows.h>

int vec[2];

int imp(int x[2])
{
	printf("LOS NUMEROS IMPARES SON:\n");
    for(int i=x[0];i<x[1];i++)
    {
            
		if(i%2==0)
		
		printf("\n");
		
		else
		
		printf("\n\t%d\n",i);
		
	}
}
main(){
       system("color w9");
	
	for(int i=0;i<2;i++)
    {
		printf("Ingresa numero %d:   ",i+1);
		scanf("%d",&vec[i]);	
	}
	imp(vec);
	getch();
}
