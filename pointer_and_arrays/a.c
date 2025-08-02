#include <stdio.h>

int main(void) { 
 
   int a[] = { 1 ,2 ,3 ,4,5 } ; 

   int* p = &a[0] ; 
   
   while( p <= &a[4] ) { 
      printf("%p %d\n" , p , *p) ; 
      p++ ;
   }

    int* q = &a[0] ;

    while( q <= &a[5]) { 
        printf("%p %d\n" ,  q , *q) ;  
        q++ ; 
    }

   // lets try one extra  
    int* r = &a[0] ;
    while( r <= &a[6]) { 
        printf("%p %d\n" ,  r , *r) ;  
        r++ ; 
    } 

    // the address of the out of bound stuff is calculated by C.
    /* 
    0x7ffcec28f230 1
    0x7ffcec28f234 2
    0x7ffcec28f238 3
    0x7ffcec28f23c 4
    0x7ffcec28f240 5
    0x7ffcec28f244 32764
    0x7ffcec28f248 -1699494912
    // a gap of 4 bytes b/w addresses. As each element  of array is int. and it is  taking  4 bytes. 
    */
    printf("%d\n" , (int) sizeof(a[0]) )  ;   //4 

    long b [] = { 1,33,4444,444} ;  

    printf("%d\n" , (int) sizeof(b[0]) ) ;   
    
    long* s = &b[0] ;
    while( s <= &b[6]) { 
        printf("%p %ld \n" ,  s , *s) ;  
        s++ ; 
    }

    /* 
    8
    0x7ffcb138c090 1 
    0x7ffcb138c098 33 
    0x7ffcb138c0a0 4444 
    0x7ffcb138c0a8 444 
    0x7ffcb138c0b0 140723281772960 
    0x7ffcb138c0b8 1511076051127437056 
    0x7ffcb138c0c0 140723281772896 
    */ 

    // ponters to compound literals 

    int* t = (int [] ) { 3 ,4 ,5 ,35 ,54 } ; 

    for(int i = 0 ; i<5  ; i++) { 
        printf("%d\n" , *t++ ) ; 
    }

    // combining * and ++ 

    int z[10] ;  
    //int* m = &z[0] ;  
    int* m = z ;   // the name of array itself is the pointer to the first element of the array.
    for(int i = 0 ; i<10 ; i++) { 
        *m++ = 4*i ; 
    }
    for(int i = 0 ; i<10 ; i++) { 
        printf("%d\n",*--m) ; 
    }


    // using the array name as the pointer ; 

    int y[] = { 45,5,54,5,54 } ; 

    *y = 123 ;  // y points  to the first element of the array; 
    // the location of the y itself cannot be changed , 

    //y = &a[1] ; // this is invalid , because y must point to the first element of the array , if u try to change it , compiler will throw error. 

    for(int i = 0 ; i<5 ;i++) { 
        *(y+i)  = 5*i  ;   // here we are not updating the y pointer but accessing an element at offset i from y. 
        // *y++ = 4 * i ;  this is not allowed , u cannot change the location of the pointer. 
    }

    // y++ increments the pointer. It makes it to point next address. 
    // y+i ,  we are not changing the pointer but using it to go to the an address i distance away from i. y stays where it was earlier. 

    for(int i = 0 ; i<5;i++) {
        printf("%d " , y[i] ) ;
    }
}