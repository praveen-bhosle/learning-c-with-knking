#include <stdio.h>

void swap(int* p , int* q) { 
    int a = *p ; 
    *p = *q ;  
    *q = a ; 
}

int main(void) { 
    int a = 123 ; 
    int b = 1222;
    printf("%d %d\n" ,a,b ) ; 
    swap(&a,&b) ;
    printf("%d %d\n" ,a,b ) ; 
}