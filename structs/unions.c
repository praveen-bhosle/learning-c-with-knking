#include<stdio.h>

union U { 
    int i ; 
    double d ;  
}  ; 

// u can be either an int or a double. 
// size of u is 8 bytes.
// if intialised with int then first 4 bytes are used. 
// u can change it to assign u to a double , but then  the old int will be lost. 



int main() { 
   union U u = { .d = 5.122 } ; 
   printf("%d %f\n" , u.i , u.d  ) ;
   u.i = 400 ;  
   printf("%d %f\n" , u.i , u.d  ) ;  
}