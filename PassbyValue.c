#include <stdio.h>

//Parameter passing methods 
// 1. Pass by Value 2.Pass by Address 3. Pass by Reference 
// Use pass by Value when you do not have to change the actual parameters. --- swapping is only done in formal parameters & and the return value is only read 


// Our function is going to swap two integers 

//Pass by Value

void swap(int x, int y)
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
    swap(a,b); 
    printf("%d%d", a,b ); 
    
    return 0; 
}
