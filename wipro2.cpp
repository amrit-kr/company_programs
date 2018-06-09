#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll tr;
    cin>>tr;
    while(tr--)
    {
        ll n,sum=0;
        cin>>n;
        for(ll j=1;j<=(n/2);j++)
        {
            if(n%j==0)
                sum = sum+j;
        }
        if(sum==n)
        {
            cout<<"1"<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;
}
