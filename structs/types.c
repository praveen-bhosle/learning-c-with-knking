#include<stdio.h>
#include<string.h>
#define NAME_LEN 34 

// struct types 
// two ways we can declare them 

// using the struct tag 
struct employee { 
    int sl_number ;
    char name[NAME_LEN+1] ; 
    int age ; 
} ; 

// using typedef 

typedef struct { 
    int number ;
    char name[NAME_LEN+1] ;  
    int age ; 
} Employee ; 

typedef struct {  
    char a[20] ;
} X ; 


int main() {   

    // declaring variables of  type employee. 
    // employee emp1 ; // tbis is illegal , the struct_name must start with struct 
    struct employee emp1  ; 
    // so the term employee itself itself has no value without sturct at first. 
    // so we can also have varibles of other type with name employee.
    int employee  = 4 ;  // this is valid.
    struct employee emp2 = { 2 , "pr" , 19 }, emp3 = { .name = "prr" , .sl_number = 44 , .age = 20 } ; 
    emp1 = emp2 ;  
    printf("SlNo %d name %s age %d\n" , emp1.sl_number , emp1.name , emp1.age  ) ;  

    // here we no more need to use the keyword struct before declaring the vars. 
    // and also we cannot use the term Employee to name a variable.
    Employee a , b ;    
    X c ; 
    printf("Before %s\n" ,  c.a ) ; 
    char* ptr = c.a ; 
    *ptr = 'a' ;   
    printf("After %s\n" ,  c.a ) ; 
    strcpy(c.a , "praveen") ;
    printf("After copy %s\n" , c.a) ;
    // lvalue members can be assigned directly using = , changed using ++ , -- .etc.     
   
}