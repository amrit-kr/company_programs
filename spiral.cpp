#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll p,q;
	cout<<"enter row value"<<endl;
	cin>>p;
	cout<<"enter column value"<<endl;
	cin>>q;
	int a[p][q];
	cout<<"enter matrix element"<<endl;
	for(int j=0;j<p;j++)
	{
		for(int x=0;x<q;x++)
		{
			cin>>a[j][x];
		}
	}
    ll k,m,l,n,i;
/*	
	k--starting row index
	m--ending row index
	l--starting column index
	n--ending column index
	*/
	k=0,m=p,l=0,n=q;
		while(k<m && l<n)
		{
			// first row
			for(i=l;i<n;++i)
			{
				cout<<a[k][i]<<" ";
			}
			k++;
			
			// last column
			for(i=k;i<m;++i)
			{
				cout<<a[i][n-1]<<" ";
			}
			n--;
			
			// last row
			if(k<m)
			{
				for(i=n-1;i>=l;--i)
				{
					cout<<a[m-1][i]<<" ";
				}
				m--;
			}
			if(l<n)
			{
				for(i=m-1;i>=k;--i)
				{
					cout<<a[i][l]<<" ";
				}
				l++;
			}
		}
	return 0;
}
