// fibonacci series using recursion.

#include<stdio.h>
int fib(int n)
{
    if(n<=1)
        return n;
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("\n%dth Fibonacci number is : %d\n",n,fib(n));
    return 0;
}
