#include<bits/stdc++.h>
using namespace std;
int max_val(int a, int b)
{
     return (a>b) ? a : b;
}
int lcs(char * ar1,char * ar2,int m, int n)
{
    int lcs_length;
    int a[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                a[i][j]=0;
            else
            {
                if(ar1[i-1]==ar2[j-1])
                    a[i][j] = 1 + a[i-1][j-1];
                else
                    a[i][j] = max_val(a[i-1][j],a[i][j-1]);
            }
        }
    }
    lcs_length = a[m][n];
    //return a[m][n];
    char str[lcs_length+1];
    str[lcs_length] = ' ';
    int i=m,j=n;
    while(i>0 && j>0)
    {
        if(ar1[i-1]==ar2[j-1])
        {
            str[lcs_length-1] = ar1[i-1];
            lcs_length--,i--,j--;
        }
        else
        {
            if(a[i-1][j] > a[i][j-1])
                i--;
            else
                j--;
        }
    }
    cout<<"Longest common subsequence : "<<str<<endl;
    return a[m][n];
}
int main()
{
    char ar1[] = "AGGTAB";
    char ar2[] = "GXTXAYB";
    int m,n;
    m = strlen(ar1);
    n = strlen(ar2);
    cout<<"Length of longest common subsequence is :"<<lcs(ar1,ar2,m,n)<<endl;
    return 0;
}
