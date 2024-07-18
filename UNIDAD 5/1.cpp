 #include <stdlib.h> 
#include <iostream>

using namespace std;

int* fun0(int i) {              // L.4
  cout << i << endl;
  return &i;
}
int fun1(int i) {               // L.8
  cout << i << endl;
  return 10*i;
}

void fun2(int *pf(int)) { pf(3); }          // L.13
void fun3(int (*pf)(int)) { pf(20); }       // L.14

int main(void) {                // =========
  int x = 10;
  int y = fun1(x);              // M.3
  fun1(fun1(y));                // M.4
  int (*pf1)(int) = &fun1;      // M.5
  pf1(x);                       // M.6
  fun3(pf1);                    // M.7
  int* (*pf2)(int) = &fun0;     // M.8
  pf2(y);                       // M.9
  fun2(pf2);                    // M.10
  fun2(fun0);                   // M.11
  
 printf("pause"); 
  return 0;
}
