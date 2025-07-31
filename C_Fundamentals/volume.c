#include <stdio.h> 
#define INCREMENT 0.02 

int main(void) { 
 
    int a ; 
    int b ; 
    int c ; 

    scanf("%d",&a) ; 
    scanf("%d",&b) ;
    scanf("%d",&c) ;   

    float v = a * b * c + INCREMENT ; 

    printf("%.2f\n",v) ; 

    return 0 ; 
}