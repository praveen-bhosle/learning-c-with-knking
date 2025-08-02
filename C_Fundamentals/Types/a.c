#include<stdio.h>

int main(void) { 
 
    char ch ; 

    ch = getchar() ; 

    // printf("%c\n",ch) ;

    putchar(ch) ;  

    while( (ch = getchar()) != '\n') { 
        putchar(ch) ; 
    }
    putchar(ch) ; 
    while( getchar() != '\n') { 
        printf("hi there \n") ; 
    }
    putchar(ch) ; 

    return 0 ; 
}