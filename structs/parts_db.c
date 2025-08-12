#include<stdio.h> 
#include<string.h>
#include<stdlib.h>

typedef struct { 
     int id , quantity ; 
     char name[20] ; 
} Item ; 

typedef struct  {  
    int size ; 
    Item  items[100] ; 
}  Global ; 


void printItem( const Item* item ) { 
    printf("%3d %s %3d\n" , item->id , item->name , item->quantity ) ; 
}

void printItems( const Item a[]  ,  int size  ) {       
    printf("NO. NAME QUANTITY\n" ) ; 
    if(size == 0 ) { 
        printf("No items added yet.\n") ; 
    }
    for( int i = 0 ; i < size ; i++) {  
        printItem(&a[i]) ;
    }
}

void insertPrompt(Global* global) { 
    if(global->size>=100) { 
      printf("Capacity full.\n") ; 
      return ; 
    }
    int id , quntity ;
    char name[20] ; 
    printf("Enter part id:") ;
    scanf("%d",&id) ; 
    printf("Enter part name:") ; 
    scanf("%s",name) ; 
    printf("Enter part quantity:") ; 
    scanf("%d",&quntity) ;   
    Item item = { id  , quntity} ;
    strcpy(item.name , name ) ;   
    global->items[global->size++] = item ; 
}

Item*  checkIfPartIdExists(Global* global  , int id ) {    
    for(int i = 0 ; i < global->size ; i++) {   
        if(global->items[i].id == id ) return &global->items[i] ;  
    }
    return  NULL ; 
}

void updatePrompt(Global* global) {   
    int id , quntity ;
    char name[20] ; 
    printf("Enter part id:") ;
    scanf("%d",&id) ;  
    Item* item = checkIfPartIdExists(global,id) ; 
    if(item==NULL) { 
        printf("The pard id does not exist.\n") ; 
        return ; 
    }
    printf("Enter part name:") ; 
    scanf("%s",name) ; 
    printf("Enter part quantity:") ; 
    scanf("%d",&quntity) ;    
    strcpy(item->name,name) ; 
    item->quantity = quntity ; 
}

void searchPrompt(Global* global ) {  
    int id ;
    printf("Enter part id:") ;
    scanf("%d",&id) ;  
    Item* item =   checkIfPartIdExists(global,id) ;  
    if(item==NULL) { 
        printf("The part id does not exist") ; 
        return ; 
    }
    printf("Part name: %s \n" , item->name   )  ; 
    printf("Part quantity: %d\n" , item->quantity  ) ; 
}



int main() { 
    Item  items[100] ;  
    Global global = { 0 , items } ; 
    printf("Operation codes: i(insert)  u(update) s(search) p(print) q(quit) \n") ; 
    while(1) {   
        printf("Enter the command:") ; 
        char command ; 
        scanf("%c" , &command ) ; 
        switch (command) { 
            case 'p' :  { printItems(global.items,global.size) ; break; } ; 
            case 's' :  { searchPrompt(&global);                 break; }  ; 
            case 'u' :  { updatePrompt(&global);                 break; }  ; 
            case 'i' :  { insertPrompt(&global) ;                break; } ; 
            case 'q' :  exit(0) ; 
            default  :  printf("Invalid command passed\n") ; 
        }
        char extra ; 
        scanf("%c",&extra) ;  
    }
}