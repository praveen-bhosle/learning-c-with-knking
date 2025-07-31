#include <stdio.h> 
#define SPHERE_VOLUME_FACTOR 4.0f/3.0f * 3.14f 

int main(void) { 
    float r ; 
    scanf("%f",&r) ;  
    float vol = r * r * r * SPHERE_VOLUME_FACTOR ; 
    printf("%.2f\n",vol) ;  
    return 0 ;
}