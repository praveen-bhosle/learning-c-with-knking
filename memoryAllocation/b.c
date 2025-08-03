#include<stdlib.h> 
#include<stdio.h> 

int main() { 
 
 int* a ; 
 a = malloc( 10 * sizeof(int)) ; 

 for(int i = 0 ; i<10 ; i++) { 
    a[i] = i ; 
 }
 
 for(int i = 0 ; i<10 ; i++) { 
    printf("%d ", a[i] ) ; 
 }
 printf("\n") ; 

}