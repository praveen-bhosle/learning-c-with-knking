#include <stdio.h>

void avg_sum(int a[] , int n , int* avg , int* sum  ) { 
     for(int i = 0;i<n;i++ ) {
        *sum+=a[i]; 
      }
      *avg = *sum/5 ;
}

int main(void) { 
    int a[] = { 1 ,2 ,3 , 4 ,5 } ; 
    int avg  ; 
    int sum  = 0 ; 
    avg_sum( a , 5 , &avg , &sum ) ; 
    printf("%d %d" , avg , sum ) ; 
}