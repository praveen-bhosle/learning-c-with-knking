#include <stdio.h>
#define SIZE ((int) (sizeof(a) / sizeof(a[0]) ) ) 
// the size will be detemined using a idenifier in main func.
// to use size in main it must have 'a' identifier  and 'a'  must be correct type so a[0] can be accessed.
int main(void ) { 
    int a[10] = {33 ,4 ,4 ,4,5,5} ;
    for(int i = 0 ; i<SIZE ; i++)  { 
        printf("%d " , a[i]);
    }
    printf("\n") ;
}