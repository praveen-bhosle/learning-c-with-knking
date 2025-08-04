#include <stdio.h>

// pointers in multidimenstional arrays. 
void printAll(int* p , int m  , int n ) { 
    int total = m * n ; 
    int i = 0 ; 
    while( i<4  ) {  
        printf("%d ", p[i++] ); 
    }
    printf("\n") ; 
    int*q = p ; 
    while(p<&q[total]) { 
        printf("%p %d \n" , p ,  *p++) ;  
    }
}

int highestElementInEachRow( int* a  , int n ) {  
    int ans = 0 ; 
    int* b = a; 
    while(a < &b[n] ) { 
        if(*a > ans) ans = *a ;
        a++ ; 
    }  
    return ans ;
}

void  highestInEachColumn(int* a  ,  int n  ,  int m  , int** p ) { 
    int* b = a ;  
    int i = 0 ; 
    while(a<&b[n]) { 
        printf("evalutating for  %d\n", *a) ; 
        int* c = a ; 
        p[i] = a ;  
        while( c <= &a[(m-1)*n] ) { 
            printf("evalutating for  %d\n", *c) ; 
            if(*c>*p[i])  p[i] = c ; 
            c+=n ; 
        } 
        a++ ;
        i++ ;
    }
}

int main(void) { 


    int a[2][3] = { 1 ,2 ,3 ,4 ,45 ,5  } ; 

    // a will be pointing to the first row of the 2D array ; 
    // a is the 2D array , and therefore 'a' will point to the first element i.e an array in its collection.
    // a[i] is a 1D array , and therefore a[i] will point to the first element in a[i] , i.e an integer , i.e  the first element in a[i].
 
    printAll(&a[0][0],2,3) ; 

    printAll(a[0] , 2 , 3 ) ; 

    // a[i] will be the pointer to first element in the ith row. 
    // a[i][j] = *(a[i]+j) 
     
    // find highest element of each row 
    for(int i = 0 ; i<2 ; i++) { 
        int currRowMax = highestElementInEachRow(a[i],3) ; // a[i] is a 1D array and we are passing the pointer  pointing to the first element in a[i].
        printf("The max element in row number %d is %d\n" , i ,currRowMax ) ; 
    }
    int num_cols = 3 ; 
    // pointer to a 1D array itself. 
    int (*p) [num_cols] ; 
    // without the parantheses around p compiler would treat this as an array of pointers , instead of a pointer to the array itself. 
    p  = a  ;  
    p  = &a[0] ;  

    int (*q)[2][3] ; // pointer to the 2D array 
    q = &a  ; 
    int *r  ; 
    r = a[0] ; 

    // lets print all these 3 pointers
    printf("%p %p %p \n" , p , q , r ) ; 
    // 0x7ffe770ff810 0x7ffe770ff810 0x7ffe770ff810 
    // All of them point at the same place , it just that increment will be different for each of these.
    // they are pointing at same place but to different types. 
    // lets apply indirection operator and check size of the element they are pointing to get a clear picture.

    printf("%d %d %d \n" , sizeof(*p) , sizeof(*q) , sizeof(*r) ) ;  
    // 12 24 4 
    // size of a row , size of 2D array , size of single element in each row. 

    // find max element in each column.  
    // to process colums  we can  take pointer pointing to  the a[0][0] and do +=3 on the pointer.
    // an array of pointers containing pointer to max element in each of the col. 
    int* t[num_cols] ;  

    highestInEachColumn(a[0] , 3 , 2 , t ) ; 
    int** x  = t ;
   
    while( x < &t[num_cols] ) { 
        printf("%d\n" , **x++  ) ;
    }

    x = t ; 
    while( x < &t[num_cols] ) { 
        **x++ = 1223 ; 
    }
    for(int* p = a[1] ; p<&a[1][3] ;p++ ) { 
        printf("%d ",  *p ) ;
    }
    printf("\n") ; 
    printAll(a[0] , 2 , 3  ) ; 
}