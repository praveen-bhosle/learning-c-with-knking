#include <stdio.h> 

int main(void) { 
    // vla -> variable length array 
    // the size of array is not known at the compile time.
    // it is calculated at the run time.

    int n ; 

    printf("Enter the numbers  u want \n"  ) ; 

    scanf("%d",&n) ; 

    int a[n] ;

    for(int i = 0 ; i<n ; i++) { 
        a[i] = i+1 ; 
    } 

    for(int i = 0 ; i<n ; i++) { 
        printf("%d " , a[i]) ; 
    } 
    printf("\n") ; 
 
}