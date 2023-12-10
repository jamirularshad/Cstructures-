//Complex Num Structure  a + ib

#include<stdio.h>

struct Complex 
{ 
    int real; 
    int img ; 
    
};

int main() 
{ 

}

// Student Structure 

struct student 
{ 
    int roll; 
    char name [25]; 
    char dept [10];
    char address[50]; 
} ; 

struct student s ; 
s.roll = 10; 
s.name = "John"
//...

// Playing cards struct 

Struct Card 
{ 
    int face ; 
    int shape; 
    int colour; 
}; 


// int main() 
// { struct card c; 
// c.face = 1 ; 
// c.shape = 0; 
// c.color = 0 ; 

//OR ( we can declare and initialize in the same step as follows )
//struct card c = {1,0,0}; 

int main()
{ 
    struct card deck[52]; 
    // Array of structures is formed when we declare deck[52] - basically 52 types of stuctures , 1 structures
    // takes 6 bytes because each int value takes 2 bytes. this means that 52 structures take 312 bytes 
    // struct card deck[52]. = {{1,0,0},{2,0,0}.............} ( Both declaring and initialization)
 
 
 // to access the first card structure of the deck we use "."
 
   printtf("%d\n", deck[0].face); 
   printtf("%d\n", deck[0].shape);
   printtf("%d\n", deck[0].color);
   
   // deck [0] access the first card detail structure of the deck
   // .face access the face section and printf prints that 
   
   return 0 
}
   
