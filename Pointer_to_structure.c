//pointer to structure 

#include<stdio.h>
#include<stdlib.h> 

struct Rectangle
{ 
    int length; 
    int breadth; 
    
}; 

int main() 
{ 
    struct Rectangle r={10,5}
    struct Rectangle *p= &r; //declared and initialized 
    
    r.length = 15; 
    //or (*p).length = 20; or p -> length = 20; ( Method to access a structure using pointer- Arroe is used )
    
    ...
    
} 



// If you want to include the structure inside heap 

int main()
{ 
    struct Rectangle *p ; // creating the pointer variable
    
    p = ( structRectangle *)malloc(size of (structRectangle)); 
    
    p -> length = 10 ; 
    p -> breadth = 5 ; 
    
    return 0 ; 
    
} 
    
