#include<stdio.h> 
#include<stdlib.h>


struct point { 
    int x  ;
    int y ; 
};

int main() { 
  int* a  ; 
  a = calloc( 10 , sizeof(int) ) ; 
  
  for(int i = 0 ; i<10 ;i++) { 
    printf("%d " , a[i] ) ; 
  } 

  printf("\n") ; 

 struct point* p  ;  
 p = calloc(1,sizeof(struct point)) ; 

 printf("x: %d , y: %d\n" , p->x , p->y ) ;    // 0 , 0 

 // calloc allocates memory + initilaises with default values. 
 // malloc allocates only memory and there can be garbage value in that memory.
 // calloc prototype : (how many blocks u need , size of each block )
}