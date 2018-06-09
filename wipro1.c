

// print 1st n fibonacci numbers using Dynamic programming.

#include<stdio.h>
void fib(int n)
{
    int a[n+1];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(int j=1;j<=n;j++)
    {
        printf("%d ",a[j]);
    }
    printf("\n");
}
int main()
{
    int tr;
    printf("Enter test cases : ");
    scanf("%d",&tr);
    while(tr--)
    {
        int n;
        printf("Enter a number : ");
        scanf("%d",&n);
        fib(n);
    }
    return 0;
}
