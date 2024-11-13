#include <stdio.h>
#include<math.h>    // this header file is required to access the sqrt() function which used below
int isPerfectSquare(long long x)    //to check for perfect square
{
    long long s = sqrt(x);
    return(s*s==x);
}
int isFibonacci( long long n)     // to check for fibonacci series 
{
    return isPerfectSquare(5*n*n+4) || isPerfectSquare(5*n*n-4);      
}

int main()
{
    int num;
    printf("Enter a number : ")
    scanf("%d",&num);
    if (num<=0)                  // for zero and negative numbers
    {
        printf("\nInvalid input");
    }
    else  if (isFibonacci(num,0,0))
    {
        printf("\nThe give number is in Fibonacci Series.");}
        
    else 
    {
        printf("\nThe give number is not in Fibonacci Series.");
    }
	return 0;
}
