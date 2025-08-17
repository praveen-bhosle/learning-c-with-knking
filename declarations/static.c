#include<stdio.h>

char digit_to_hex_char(int digit) { 
    const char hex_chars[16] = "0123456789ABCDEF" ; 
    return hex_chars[digit] ; 
}
char digit_to_hex_char2(int digit) { 
    const char hex_chars[16] = "0123456789ABCDEF" ; 
    return hex_chars[digit] ; 
}


int main() { 
    // each time u call digit_to_hex_char  : each time u call this the string is copied to the array. 
    // each time u call digit_to_hex_char2 : here hex_chars initilised only once and that same is shared b/w calls. 
    // using 2nd fn is faster then  using first fn. 
}