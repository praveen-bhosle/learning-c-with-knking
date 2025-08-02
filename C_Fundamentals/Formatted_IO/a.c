#include<stdio.h>

int main(void) { 
      
      int a = 123 ; 
      float b = 23.455f ; 
      // Conversion Specifications : Used to control how the printf will print the variables.
      printf("this is a %d , this is b %.2f\n" ) ;           // both garbage.
      printf("this is a %d , this is b %.2f\n" , a  ) ;      // first value will be correct , second garbage. 
      printf("this is a %d , this is b %.2f\n" , a , b   ) ; // both correct 
      printf("this is a %d , this is b %.2f\n" , b , a    ) ; // order matters too.
      // invalid values passed leads to undefined behaviour.

      // %m.pX or %-m.pX 
      // %mX or %-mX 
      // m -> minimum width field.
      // no - sign : right justified / spaces in right side.
      // - sign : left justified / spaces on the left side. 
      printf("....%2d.....\n",a)  ;
      printf("....%3d.....\n",a)  ;
      printf("....%4d.....\n",a)  ;
      printf("....%-2d.....\n",a) ;
      printf("....%-5d.....\n",a) ;

      // X 
        // d -> decimal base 10
        // e -> floating point number in exponential format 
        // f -> floating point number in fixed decimal format

      // p -> precision 
        // for d -> 
            // number of digits to display.
            // extra zeros added in the beginning.
            // if ommited assumed to have value 1. %d -> %.1d
            // no effect if  p less than min. chars needed to display the int.
            printf("%.2d\n",a);
            printf("%.3d\n",a);
            printf("%.4d\n",a);
            printf("%.5d\n",a);
        // for e and f -> 
            // how many digits after decimal. Default is 6.
            // if p = 0 then decimal point not shown. 
            // %e = %.6e 
            printf("%.2e\n",b);
            printf("%.3e\n",b);
            printf("%.4e\n",b);
            printf("%.5e\n",b);
            printf("%.0e\n",b);
            printf("%e\n",b);
        
        // g is verbose. skipping it for now.

        int d ; 
        float f ; 
        float g ; 
        int h ; 
        scanf("%d%f%f%d" , &d , &f , &g , &h) ; 

        // scanf ignores spaces and \n  
        


}