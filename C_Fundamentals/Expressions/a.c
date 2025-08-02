#include<stdio.h>

int main(void) { 
    int i = 53333 ; 
    int j = 32 ; 
    printf("%d %d %d %d " , i/j , -i/j , -i/-j , i/-j  ) ;  
    // negative quotient trucated towards zero 
    // if both i and j  diff sign then negative quotient 
    // if both i and j  same sign then positive quotient
    printf("%d %d %d %d " , i%j , -i%j , -i%-j , i%-j  ) ;  
 }