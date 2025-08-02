#include <stdio.h>

int main(void) { 
    int a = 35 ; 
    int* p = &a  ;
    printf("%p %d %p",p,*p,&p) ; 

    int i = 5 ; 
    int* q = &i ; 
    int* r = q ; 
    r=i ;
    printf("%p %d",r,*r) ; 

}