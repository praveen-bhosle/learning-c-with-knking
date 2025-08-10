#include<stdlib.h>
#include<stdio.h>
#define NAME_LEN  25 

// struct variables covered.


struct { 
    int serial_number ;
    char name[NAME_LEN+1] ;
}  item1 , item2 ; 


struct { 
    int serial_number ;
    char name[NAME_LEN+1] ;
}  item3  = { 223 , "car" } , item4 = { 233 , "bus" }  ;  
// order of members must be preserved. 

struct { 
    int serial_number ; 
    char name[NAME_LEN+1] ; 
    int  age ;    
} employee1 =  { .age = 23 , .name ="praveen1" , .serial_number = 2   } , employee2 = { .age = 34 , .serial_number = 4  , .name = "praveen2"   } ;  
 
// this way of initialisation called is designated initialisation . 

int main() { 
  printf("printing item1 details , item sl.no %d and name is %s\n" ,  item1.serial_number , item1.name ) ; // this we didnt initialise , so it got the default values. 
  // lets check what is in item1.name 
   
  size_t  x =  sizeof(item1.name) ; 
  printf("%d\n" ,  x ) ; // 26 
  
  char* name_addr = item1.name ; 
   
  while( 0 && name_addr <= item1.name + 26 ) { 
    printf("%d %p\n" ,  *name_addr , name_addr ) ; 
    name_addr++ ; 
  }
  // all items are '\0' by default as we did not initialise any value. 

  printf("printing item1 details , item sl.no %d and name is %s address of name is  %p\n " ,  item3.serial_number , item3.name , item1.name ) ; 

  // item1.name = "pcd" ; // not possible  
  item1.serial_number = 44 ;  

  printf("%d\n" , item1.serial_number ) ; 

  // '.' is an  operator , same precendence of that of ++ and --. 
  // so '.' has higher precedence than &. 

  printf("%p\n" , &item1.serial_number) ;   

  // we can  copy one struct into another using = provided that both structs are of same type. 
  // This was not possible  for arrays. 
    
  printf("%d %s\n"  , item4.serial_number , item4.name) ; 
  item4 = item3 ; 
  printf("%d %s\n"  , item4.serial_number , item4.name) ;  
}