//  program for binary seaech of a key element.s

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int b_search(int ar[],int k,int fst,int last)
{
    ll mid;
    if(fst==last)
    {
        if(ar[fst]==k)
            return fst;
        else
            return -1;
    }
    else
    {
        mid=(fst+last)/2;
        if(ar[mid]==k)
            return mid;
        else
        {
                if(k>ar[mid])
                {
                    return b_search(ar,k,mid+1,last);
                }
                else
                    return b_search(ar,k,fst,mid-1);
        }
    }
}
int main()
{
    ll tr;
    cout<<"Enter test cases : ";
    cin>>tr;
    while(tr--)
    {
        ll n,k,ans;
        cout<<"Enter size of array : ";
        cin>>n;
        int ar[n];
        cout<<"Enter array elements : ";
        for(int i=0;i<n;i++)
        cin>>ar[i];
        cout<<"Enter key element for search : ";
        cin>>k;
        ans = b_search(ar,k,0,n-1);
        if(ans!=-1)
            cout<<"position of key element is : "<<ans<<endl;
        else
            cout<<"could not find key element"<<endl;
    }

}
