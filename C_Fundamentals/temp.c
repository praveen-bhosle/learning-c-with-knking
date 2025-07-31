#include <stdio.h>
#define FREEZING_POINT  32.0f
#define SCALE_FACTOR 5.0f/9.0f

int main(void) { 
    float temp1 ; 
    printf("Enter the temperature in F: "); 
    scanf("%f" , &temp1 ) ;
    float temp2 = ( temp1 - FREEZING_POINT ) * SCALE_FACTOR  ;
    printf("%.2f\n",temp2) ; 
    return 0 ; 
}

