#include<stdio.h> 
#include<stdlib.h>

int secret ; 

int initiliseSecret() { 
    secret = 33 ; 
}

void play() { 
    initiliseSecret(); 
    printf("Guess the number bw 1 and 100\n")  ; 
    int num = secret+1 ; 
    int count = 0 ;  
    while(num!=secret) { 
        if(count!=0) printf("Invalid guesss. Try again.\n") ; 
        scanf("%d",&num)  ;  
        count++ ;
    }
    printf("Correct guess\n") ; 
}

int main() { 
    while(1) { 
        play() ; 
        char input = 'A'; 
        int count = 0 ; 
        while(input != 'Y' &&  input != 'Q'  ) {
            if(count != 0) printf("Invalid input passed\n"); 
            printf("Want to play again press Y to play and Q to exit\n") ;
            scanf(" %c" , &input) ; 
            count++ ;
        }
        if (input=='Q') exit(0) ; 
    }
}