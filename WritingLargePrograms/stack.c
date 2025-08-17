#include "stack.h" 
#include  <stdbool.h>

int contents[100] ; 
int top = 0 ; 

void make_empty(void) {   
    top=0; 
}  

bool is_empty(void) { 
    return top==0 ;
}

bool is_full(void) { 
    return top==100 ; 
} 

void push(int i ) {  
    if(!is_full()) contents[top++] = i ; 
}

int pop(void) {
    if(!is_empty()) contents[top--] ;
}