#include <stdio.h>

//Parameter passing methods 
// 1. Pass by Value 2.Pass by Address 3. Pass by Reference 

// Our function is going to swap integers 
// Adresses can only be passed by pointers 


//Pass by Address - Changes actual parameters 

void swap(int *x, int *y) // 2nd Difference - The formal parameters must be able to receive the 
                        // actual parameters so must include the * to make it pointers 
                        // We also have to change every x,y later in this code to *x and *y because you want to 
                        // to change the (dereferencing)   value inside the pointers and not the address itself 
{ 
    
    int temp; 
    temp = x;
    x = y ;
    y = temp ; // Swapping is done in the External Formal Parameters only and not inside the actual parameters 
    
}

int main() 
{
    int a, b; 
    a = 10;
    b = 20; 
    swap(&a,&b); // First difference from call by value - putting & for address 
                // Notice they are the actual parameters
    printf("%d%d", a,b ); 
    
    return 0; 
}
