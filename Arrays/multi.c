#include<stdio.h> 


void print(  int m , int n , int a[m][n]   ) { 
    for(int i = 0 ; i<m ;i++) { 
        for(int j = 0 ; j<n ; j++) { 
            printf("%d " , a[i][j]) ;  
        }
        printf("\n") ;
    } 
}

int main(void) { 
    // u must provide no. of cols ,  u cant do int a[][].
    int a [10][20] = { } ; 
    int b[12][22] = {  { 2 ,3 ,45 , 5 } , { 44 ,5 , 444 } } ; 
    int c[12][3] =  {  2 ,3 ,3 ,4 ,5 ,5,5  }  ; 
    int d[][4] = { { 4 ,5, 5, 55 } , { 4 ,5 ,5}, { 3}, { 4,5}} ; 
    print(10,20,a) ; 
    print(12,22,b) ; 
    print(12,3,c) ; 
    print(4,4,d) ; 

    int e[2][2] = { [0][0] = 3 , [1][1] = 5   } ; 

    print(2,2,e) ; 

}