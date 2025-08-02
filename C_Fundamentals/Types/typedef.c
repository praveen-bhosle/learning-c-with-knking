#define false 0 ; 
#define true 1 ; 

typedef float Dollars ; 
typedef int bool ; 

// C doesnt not have a built in bool type. 
// We can use the above method .
// Or we  can use _Bool or <stdbool.h> 

int main(void) { 
    Dollars Cash_in = 23.44f ; 
    Dollars cash_out = 34.55f ; 
    bool a = true ; 
    bool b = false ;
}

// size_of can used to get bytes of anything. 
// type of size_of is size_t , it is an unsigned type.