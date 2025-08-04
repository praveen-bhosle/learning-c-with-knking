#include <stdio.h>

// array arguments  

// when  we pass the array to the function then the pointer of the array is passed. 
// This is differenet from how rest of the variables are passed.

void change( int a[] , int n  , int spare   ) { 
    int i = 0 ;
    while(i<n){ 
        *(a+i) = 4 + i ; 
        i++ ;
    }
    spare = 345 ; 
}
// chages made to array are reflected in the array of the main function thats not true for the spare variable. 
// To do the same thing with the spare(int) variable we  need to pass  the pointer to the spare.

void change2( int a[] , int n  , int* spare   ) { 
    int i = 0 ;
    while(i<n){ 
        *(a+i) = 4 + i  ; 
        i++ ;
    }
    *spare = 345 ; 
}

// we can use the const keyword to prevent a function from changing an array .

void change3( const int a[] ) { 
  //  a[0] = 44 ; 
  // compiler will throw error , u cannot modify the array now . 
}


void change4( int* a , int n  , int spare   ) { 
    int i = 0 ;
    while(i<n){ 
        *(a+i) = 433 + i ; 
        i++ ;
    }
    spare = 345 ; 
}
// we can explicitly tell the paramter is an int pointer , it works  too. 

// the thing when  we pass the name of array when u call the function what is sent is actually a pointer. 

// change(a, , ) : this sends the pointer to the first element in the array.

// U can pass any pointer in the array , like we can  pass a+1 or &a[2].  

void change5(int a[]) { 
    for(int i = 0 ; i<2 ;i++ ) { 
        a[i] = 33 + i ; 
    } 
}

void printArray(int* a ) { 
  for(int i = 0 ; i<4 ;i++) { 
    printf("%d ",a[i]) ;  
  }
  printf("\n") ; 
}

void printArrayReverse(int a[]) { 
  for(int i = 0 ; i<4 ;i++) { 
    printf("%d ",a[-i]) ;  
  }
  printf("\n") ; 
}

int main(void) { 
  
  int a[] = { 1 ,2 ,3 ,4 } ;  
  int spare = 34 ; 
  change(a,4,spare ) ; 
  for(int i = 0 ; i<4 ;i++) { 
    printf("%d ",a[i]) ;  
  }
  printf("\n") ; 
  printf("spare : %d" , spare ) ; 
  printf("\n") ; 
  change2(a,4,&spare); 
  printf("spare : %d" , spare ) ; 
  printf("\n") ; 
  change4(a,4,spare ) ; 
  printArray(a) ;  
  printArray(a+1) ;
  printArray(&a[3]) ; 
  /* 
   433 433 433 433 
   433 433 433 -2096297632 
   433 -2096297632 32765 -2044684544 
   a[i] is like offset to the given address by i places.
  */
   
   // Lets try reverse offsetting in a function.
  printArrayReverse(a) ;  
  printArrayReverse(a+2) ;
  printArrayReverse(&a[3]) ; 
  // it works. 

  /* 
  433 4   345 0 
  435 434 433 4 
  436 435 434 433 
  */ 

  // The compiler treats p[i] as *(p+i) ; 
  // As we saw i can be negative too. 
}

