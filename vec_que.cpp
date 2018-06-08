#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll m,n;
	cin>>n>>m;
	int ar[n]={0};
	vector<pair<int,int> > vec(n,make_pair(0,0));
	for(ll i=0;i<m;i++)
	{
		ll a,b,k;
		cin>>a>>b>>k;
		vec[a-1].first=(vec[a-1].first)+k;
		vec[b-1].second=(vec[b-1].second)+k;
	}
//	cout<<"S";
//	for(ll i=0;i<n;i++)
//	{
//		cout<<vec[i].first<<" "<<vec[i].second<<endl;
//	}
	ll x=0;
	for(ll i=0;i<n;i++)
	{
		if(i>0)
		{
			x=x+vec[i].first-vec[i-1].second;
			ar[i]=x;
		}
		else
		{
			x=x+vec[i].first;
			ar[i]=x;
		}
		
	
	}
//	for(int i=0;i<n;i++)
//	cout<<ar[i]<<" ";
	sort(ar,ar+n);
	cout<<ar[n-1];
	return 0;
}
