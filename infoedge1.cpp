//  Program to print first non repeated charactor in string.

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll tr;
    cin>>tr;
    while(tr--)
    {
        ll n,flag=0;
        cin>>n;
        string st;
        cin>>st;
        vector< pair<char,int> >ve;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                ve.push_back(make_pair(st[i],1));

            }
            else
            {
                flag=0;
                for(int j=0;j<ve.size();j++)
                {
                    if(ve[j].first==st[i])
                    {
                        ve[j].second++;
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    ve.push_back(make_pair(st[i],1));
            }
        }
        int flag1=0;
        for(int i=0;i<ve.size();i++)
        {
            if(ve[i].second == 1)
            {
                flag1 = 1;
                cout<<ve[i].first<<endl;
                break;
            }
        }
        if(flag1==0)
            cout<<"-1"<<endl;
    }
    return 0;
}
