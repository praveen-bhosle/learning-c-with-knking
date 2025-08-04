#include<stdio.h>
#include<string.h>

int main() { 

char str[] = "abc" ; // legal  

char str1[10] , str2[10] ; 

//str1 = "abc" ;  // illegal 
//str2 = str1 ; // illegal 
// str1 , name of the array , is pointer to the first element of the array u cannot assign a string litetal to it. 

//char* a ; 
//a = 52 ;  
//printf("%p" , a) ;  // 0x34 , 48+4=52  , ox34 can  be invalid memory address / trying to access it or write might cause issues so never assigns pointers like this.

//*a = 's' ; 

//printf("%c" , *a ) ;  

// prototype of strcpy : char* strcpy(char* s1 , const char* s2)   
// strcpy copies the chars from s2 in s1 until we reach '\0' in s2 and it return s1. 
 
strcpy(str1,"abcd") ; 
strcpy(str2,str1) ; 

strcpy(str1,strcpy(str2,"acnn")) ; 

puts(str1) ; 
puts(str2) ;

strncpy(str1,"pqrs",2) ; // only first 2 chars of str2 copied in str1(if exist) remaining chars of s1 stay untouched.

puts(str1) ; 

printf("%d" , strlen(str1)) ;  // 4 . strlen() does not inculde the \0 







}