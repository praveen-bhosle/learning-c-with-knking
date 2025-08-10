#include<stdio.h> 
#include<unistd.h>

int main(void) { 
    char* p  = "Abd" ; // { 'A' , 'b' , 'd' } ;      
    char ch = p[1] ; 
    printf("%p %c %c"  , p , *p , ch ) ; 
    printf("\n") ; 
    // if u try to modify the string literal u will get error .
    // *p = 'a' ;  // error 

    // u must always pass a char pointer or a string literal. to printf. 
    // passing a char is wrong. 
    // 'a' is diff from "a" , 
    // 'a' is char. 
  

    // passing pointers  to printf. 
    printf( p ) ;  // Abd  
    printf("\n") ; 
    printf(p+1) ;   // bd 
    printf("\n") ; 
    // printf will print until it reachers \0.
 
     
    // lets dissect contents of the string literal.
    for( char* x  = p ; x < p+5 ;  x++) { 
        printf("%d " , *x ) ; 
    }  
    // 65 , 98 , 100 , 0 . as u can see the fourth char was /0 it was added by C after the end of abd. 


    char* r = "abcd\n\0eejdd" ; 

    printf(r) ;  // abcd 


    int a[] = { 1 ,3 , 4 } ; 

    // printf(a) ;   // does not work  ,  the first arg to printf should be const char*.  
    
  
    char* name1 = "praveen" ; 
    // *name1 = 'P' ;  //  doesnt work.
    printf("%p %s\n"  , name1  , name1 )  ;  

    char name2[] = "praveen" ; 
    *name2 = 'P' ;  // This works 
    printf("%c %p\n"  , *name2 , name2 ) ;  

    // Why ?  

    // The first decalration  of string literals stores the string in a read only memory , modifying which is not allowed. 
    // Second approach copies the string literal to writeable array of chars on the stack.
    int i = 0 ; 
    while(i<9) {
        printf("%c" ,*(name2+i)); 
        i++;
    }
    printf("\n") ;

    char x[] = "rrrr" ; 
    // array of 5 length with last char '\0'. 
    char y[3] = "abcd" ;  // only first 3 chars stored and no '\0' so standard c libraries wont be able to treat this properly as they expect a string to end with \0. 
    char z[4] = "xy" ;  // the remaining two pos filled with '\0' 

    // printf writes characters in a string one by one until it encounters '\0' ,  if the string does not end with '\0' then it will continue in the memory bit by bit until it finds a '\0' 

    
    printf("%s\n" , y ) ; 
    printf("%.3s\n" , y ) ;   // first 3 chars 
    printf("%2s\n" , y ) ; 
    printf("%2.1s\n",y ) ; 
    printf("%-2s\n" , y ) ; 
    printf("%-2.1s\n",y ) ; 

    puts(y) ; // ends with \n

    char str[10] ; 

   // scanf("%s" , str) ;    
    // scanf skips the whitespaces at the beginning at starts reading from first non whitespace char  and if it detects any whitespace char it stops reading then. 
    // it wont also scan a full line as it will stop at \n . 
    // scanf always adds \0 at the end. 
    // trying to pass more then capacity of str leads to error. 
    gets(str) ; 
    // gets will not skip whitespaces. it reads until it finds \n. it does not store \n in char array instead it will store \0 in its place. 
    puts(str) ; 

    char str2[] = "rlkeoej3jrokj2okrj" ; 

   // gets(str2) ; 
    scanf("%1s" ,str2) ;  // scans only first 1 non space chars.
    puts(str2) ; 




    // Directly passing string literal is different. 
    // here the string  literal passed wont end with \0 unless added by urself. 
    printf("a""\n") ; // printf expects a char pointer as its first argument. 
    // "a" is pointer to the location containing 'a' in memory , 'a' is followed by '\0' in next memory location. 
    printf("abc\0""def") ;  
    printf("\n") ; 

}