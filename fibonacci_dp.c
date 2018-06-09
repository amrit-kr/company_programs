
// fibonacci series using Dynamic programming.

#include<stdio.h>
int fib(int n)
{
    int a[n+1];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    return a[n];
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("\n%dth Fibonacci number is : %d\n",n,fib(n));
    return 0;
}
