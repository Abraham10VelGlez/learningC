#include<stdio.h> 

main() 
{ 
int cont; 
int i; 
for(i=1;i<51;i++) 
{ 
printf("%3d %c |%3d %c |%3d %c |%3d %c |%3d %c |%3d %c |%3d %c |%3d %c " 
"|%3d %c |%3d %c\n", i, char(i), i+23, char(i+23), i+46, char(i+46), 
i+69, char(i+69), i+92, char(i+92), i+115, char(i+115), i+138, char(i+138),
i+161, char(i+161), i+184, char(i+184), i+205, char(i+205)); 

} 
getchar(); 
return 0; 
} 

