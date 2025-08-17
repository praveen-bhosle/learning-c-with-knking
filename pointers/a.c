#include <stdio.h>

// when  u pass pointer to a function the copy of pointer is passed not the pointer itself.


void add( int* p  ){  
    *p += 1 ;  
     p = NULL ;
} 

void add2( const int* p) { 
    // int this function we cant change the value of what p is pointing to. 
    // p is a pointer to a const int. 
    // We can change p. We can make it to point to somehere else , can do pointer arithmetic etc. 
} 

void x(const int* const p ) { 
    // u cannot change where p will be pointing. , p++ not allowed or p+=2 etc.
    // no changes on *p can be done. 
} 

void y ( int* const p) { 
    // u can change value of *p , but not of p itself. 
}

int main() {  
  int a = 5 ; 
  int* p = &a ; 
  printf("%p ",p) ; // When u printf("%p",p), u are printing the address of whatever p is pointing to in hex format. 
  int* q = p ;
  printf("%p ",q) ;   
  // here p and q both are pointing to int a . so printf will give the same output. 
  add(p) ; // here we are passing a copy of p , a new pointer that is pointing to a. 
  printf("%p %d", p  , *p ) ;  // the pointer still pointing to a. 

}