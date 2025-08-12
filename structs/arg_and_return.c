#include<stdio.h> 
#include<string.h> 

typedef  struct { 
    int x  ; 
    int y  ; 
} Point ; 

void print(Point) ;  
void print2(Point*) ; 
void swap(Point) ; 
void swap2(Point*) ; 

int main() { 
    Point p1  ; 
    p1.x = 34 ; 
    p1.y = 44 ;
    Point p2 = { 34 , 44} ; 
    Point p3 = { .y = 43 , .x = 4  } ;  

    printf("%p\n" , &p1) ; 
    print(p1) ; 
    // the addresses are diff. 
    print2(&p1) ;  
    // address printed same.   

    // so when  u pass a struct then a copy of the struct is passed. 

    swap(p1) ; // so this wont change the struct. 

    print(p1) ;  

    swap2(&p1) ;

    print(p1) ;  

    print( (Point) {  23  ,44  }  ) ; 
    
}

void print(Point p ) {
    printf("%p x:%d y:%d \n" , &p  , p.x , p.y  ) ;  
}

void print2(Point* p) {   
    printf("%p\n" , p ) ; 
}

void swap(Point p ) { 
    int x = p.x ; 
    p.x = p.y ; 
    p.y =  x ; 
}

void swap2(Point* p ) { 
    int x = p->x ; 
    p->x = p->y ; 
    p->y = x ; 
}