#include<stdio.h> 
#include<stdlib.h>

// use realloc to increase / decrease size of an allocated block.
// parameters  : ( pointer to memory , new size of block ) 
// the first parameter pointer's memory should be something allocated using malloc / calloc / realloc or else  undefined behaviour.
// realloc wont initialise the blocks added by it. 
// if it cannot reallocate that it will return null pointer , the old block stays unchanged. 
// if realloc called with 0 as its 1st arg , it frees the memory of the block.
// if realloc called with NULL as first arg then it behaves like malloc.  
// Realloc can do shrinking or expanding in place but also it can move the whole block to somewhere else  in the memory we cant say for sure. 

int main() {  
    int* a ; 
    a = malloc(12*sizeof(4)) ; 
    a = realloc(a,13*sizeof(4)) ;    
}