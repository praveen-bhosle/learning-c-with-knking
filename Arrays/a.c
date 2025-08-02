#include <stdio.h> 

int print(int a[] ,  int m  ) { 
    for(int i = 0 ; i< m ; i++) { 
        printf("%d " , a[i]) ; 
    }
    printf("\n") ; 
}

int main(void) { 
  int a[] = { 1,2,3,4} ; 
  int b[10] = { 2,2,3} ; 
  int c[10] = { 3 } ; 
  int d[] = { 23,3,35.3,33} ; 
  print(a,4) ; 
  print(b,10) ; 
  print(c,10) ; 
  print(d,sizeof(d)/sizeof(d[0])) ; 

  // designated initializers 
  // unitialsied indices are assigned 0.
  // if size of array not provided complier will deduce it using the largest designated index.

  int e[] = { [3] = 4 , [5] = 333  }  ;

  // if size if present , designated index must be between  0 and n-1.

  int f[33] = { [31] = 333 , [3] = 344 } ; 

  print(e,6)  ;
  print(f,33) ; 

  
 

  }
