#include<stdio.h> 


int a(int) ; // function prototype 

int main(void) {   
    int p1 = 12 ; 
    double p2 = 33.00 ; 
    int x = a(p2) ;
    int y = b(p2) ;  
    printf("%d %d\n" , x , y ) ; 
}

int a(int a) { 
    return a*a; 
} 

int b( int a ) { 
    return a*a ; 
}


// argument conversion
// when the function has a prototype decalared  : the compiler knows the type expected by the function 
   // For eg. here compiler knows  'a func' is expecting two ints. then if u pass double in the argument . then compiler will automatically convert it to int before passing it to the function. 
   // Type casting is handled by compiler. 
// If u dont want provide prototypes of function then: 
   // The compiler will still do default datatype conversion, like float to double before passing it to function, even if the function is expecting float it has no idea of it as no protype was provided. Other default promotions are char and short to int.    
// So it is better practice to have function prototypes or explicitly typecast parameters before passing them. 

/* 
Compound Literal: Temporary unnamed array passed directly to a function.
Example: func((int[]){1, 2, 3}, 3); (C99+)

Array Parameter Prototypes:
void func(int arr[]);, int arr[10];, and int* arr; are equivalent — array decays to pointer.

static Keyword in Parameters:
void func(int arr[static 5]); tells compiler array will have at least 5 elements. Enables optimization and avoids buffer overrun.

Multidimensional Arrays:
All inner dimensions must be specified.
void func(int arr[][10]); → OK
void func(int arr[][]); → Error

Variable-Length Array Parameters:
VLA sizes can be passed as function arguments.
Example:

void func(int n, int arr[][n]);  // n must be passed before arr
Supported in C99+. Allows dynamic inner dimensions.



*/