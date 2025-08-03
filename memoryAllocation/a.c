// memory allocation function from stdlib.h
// malloc,calloc,realloc used to dynamically allocate memory. 
// malloc : allocates memory block but does not initialise it.
// calloc : allocates memory block and clears it.
// realloc : resizes a previously allocated block. 
// They return  void* 
// null pointer points to nothing
// the allocation  functions will return null pointer if they are unable to allocate the required memory. 

#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

char* concat(const char*s1 , const char* s2) ; 

int main(void) { 
 void* p = malloc(1000) ; 
 if(p==NULL) printf("allocation failed.\n") ; 
 else printf("allocation done %p \n", p ) ; 

 // void *malloc(size_t size) ;  prototype of malloc , malloc allocates a block of size bytes.
 

 // dynamically allocated strings 
 // 1 char takes 1 byte. 
 // for a string of length 10. 
 void* q = malloc(11) ;  
 printf("allocation done %p \n", q ) ; 
 // 1 extra because the last block for '\0'
 
 // when u assign the  block with somethign , than typecasting of pointer will take place automatically.
 // casting of  pointer type is possible too. 

 q = (char *) malloc(4) ; 
 printf("allocation done %p \n", q ) ;   
 strcpy(q,"add") ; // '\0' added to the end automatically .
 int i = 0 ; 
 char* temp = q ; 
 while(i<4) {
    printf("%c %p " , *temp , temp ) ; 
    temp++ ; 
    i++ ;
 }
 printf("\n") ; 

 char s1[4] = { 'a' , 'b' , 'c' , '\0' } ;
 char s2[5] = { 'd' , 'e' , 'g' , 'g' , '\0'} ; 

 
 char* x = concat(s1,s2) ; 

 char* temp2 = x ; 

 while(*x!='\0') {
    printf("%c" , *x ) ; 
    x++ ; 
 }

 free(temp2) ; 

 printf("\n") ; 
}
// using dynamic allocation it is possible for functions to return a new pointer.
// A function that will return a new string by concatenating two strings.

char* concat( const char* s1  , const char* s2 ) { 
    char* result ; 
    result = malloc(strlen(s1) + strlen(s2) + 1  ) ; 
    if(!result) { 
        printf("Error allocating the memory.\n") ; 
    }
    strcpy(result,s1) ; 
    strcat(result,s2) ; 
    return result ; 
}


//443