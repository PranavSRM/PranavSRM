#include<stdio.h>
int func()
{
    static int count=0;  // initializing variable with static keyword 
    count++;
    printf("%d   ",count);
}
int nonFunc()
{
    int count=0;  // initializing variable without static keyword
    count++;
    printf("%d   ",count);
}
int main()
{
    printf("Static Function :\n");  //Expected output : 1 2 3 4 5
    func();func();
    func();func();func();
    printf("\n\nNon Static Function :\n");  //Expected output : 1 1 1 1 1
    nonFunc();nonFunc();
    nonFunc();nonFunc();nonFunc();
}
