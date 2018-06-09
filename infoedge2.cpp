// print a given number into Roman value.

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll tr;
    cin>>tr;
    string st[]={"I","II","III","IV","V","VI","VII","VIII","IX","X"};
    while(tr--)
    {
        ll n;
        cin>>n;
        vector<string> ve;
        while(n>=10)
        {
            for(int j=0;j<(n/10);j++)
            ve.push_back(st[9]);
            n = n%10;
        }
        if(n!=0)
        ve.push_back(st[n-1]);
        for(int i=0;i<ve.size();i++)
            cout<<ve[i];
        cout<<endl;
    }
    return 0;
}
