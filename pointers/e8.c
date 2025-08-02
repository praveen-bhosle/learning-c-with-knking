#include <stdio.h>

int* find_largest(int a[] , int n) { 
    int idx = 0 ; 
    for(int i = 0 ; i<n ; i++) { 
        if(a[i]>a[idx]) idx = i ; 
    } 
    return &a[idx] ; 
}

int main(void) { 
     
    int a[] = { 1 ,23 ,4 , 34, 5} ; 

    int* b = find_largest(a,5) ; 

    printf("%p %d\n" , b , *b)  ;   

}