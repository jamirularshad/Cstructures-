
int add(int a, int b) ;

int main()
{
    int x,y,z ;// 1. Declare variables
    
    x = 10; // 2.Assign Variables 
    y = 5 ; 
    
    z = add(x,y); // 3. Call Function with Actual Parameters 
    
    printf("sum is %d",z); 
    
    return 0;
}

int add(int a, int b)  // int a , int b are called formal Parameters which copies actual parameters  from line 18 
{ 
    int c ; 
    c= a+b ;
    
    return c ; 
}
