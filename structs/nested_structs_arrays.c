#include<stdio.h> 
#include<string.h>

struct name {  
    char first_name[10]  ;
    char last_name[10]   ; 
} ; 

typedef struct   { 
    struct name emp_name ;  
    int         sl_no    ; 
    int         age      ;
}  Employee ; 


struct student { 
    int id  , age ; 
    char sex ; 
    struct name student_name ; 
} student1 , student2  ; 

typedef struct  { 
    int x , y ; 
} Point  ; 

typedef struct  { 
    char* country ; 
    int code ; 
} dialing_code ; 

void printName( const struct name* name_passed  ) { 

    printf("NAME: %s %s\n" , name_passed->first_name , (*name_passed ).last_name ) ; 
}

void printEmployee( const  Employee* emp  )  {  
    printf("SL.NO: %d\n" , emp->sl_no   ) ; 
    printName( &(emp->emp_name) ) ; 
    printf("AGE: %d\n" , emp->age) ; 
    
}

void printStudent( const struct student* std  ) { 
    printf("%d %d %c \n" , std->id , std->age  , std->sex )  ; 
    printName(&std->student_name) ; 
}

int main() {   
    Employee  a  = { .emp_name =  (struct name ) { .first_name  = "Praveen" , .last_name ="Bhosle" }  , .age  = 22 , .sl_no = 3 } ;    
    printEmployee(&a) ;  
    strcpy( student1.student_name.first_name , "Praveen" ) ; 
    strcpy(student1.student_name.last_name , "Bhosle") ; 
    student1.id = 44 ; 
    student1.sex = 'M' ; 
    student1.age = 14 ; 
    struct student student3 = student1 ; 
    printStudent(&student1) ;
    printStudent(&student3) ;
 

    Employee  emps[] = { a  , a  }  ;   
 
    Point points[] = { 2 ,3 ,  4 ,4  , 5  } ;  

    for( int i = 0 ; i < 3 ; i++ ) { 
        printf( "X:%d Y:%d\n" , points[i].x , points[i].y) ;    
    }
    
    dialing_code codes[]  = { "India" , 33  , "Arg" , 44 , { .code = 42  , .country ="china"  } ,  {  "russia" , 45 } } ;  

    for( int i = 0 ; i < 4 ; i++ ) { 
        printf( "Code:%d Country:%s\n" , codes[i].code ,codes[i].country) ;    
    }

}