#include <iostream>
#include <stdio.h>
#include <conio.h>
main () 
{
int Fibonacci(int num) 
if( num==1 || num==2 )return num;
{ 
int fibo1=1; 
int fibo2=2; 
int fibo3=0; 
int i; 
for( i=3; i<=num; i++ ) 
{ 
fibo3 = fibo1 + fibo2; 
fibo1 = fibo2; 
fibo2 = fibo3; 
}
} 
return fibo3; 
} 
