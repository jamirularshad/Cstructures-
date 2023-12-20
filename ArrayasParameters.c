#include <stdio.h>

//Passing Array as Parameter 
//Arrays cannot be passed by value at all - can only be passed by address

void fun(int A[ ], int n)  // A[ ] is the formal Paramter that will be receving actual Paramter A 
                            // from main function 
                            // A[ ] works like a pointer to the array but only array   
{
    int i ; 
    
    for( int i=0; i<n ; i++)
    {
        printf("%d\n", A[i]);
    }   
}

// Or if you are using pointer- pointer points to first index of array 

// void fun(int*A,int n)
// { 
//     A[0] = 15; 
    
// }
// This changes the first value of the array from 2 to 15 

int main()
{ 
    int A[]={2,4,6,8,10}; 
    int n=5 ; 
    fun(A,n); // A is the Actual Paramter that is going to be passed to Formal Parameter line 14 
              // n is the size of the Array Paramter that is going to be passed ( in this case 5) to be used in line 20 
    
    for( int i=0 ; i<n ; i++)
    {
        printf("%d", A[i]);
    
    } 
}
