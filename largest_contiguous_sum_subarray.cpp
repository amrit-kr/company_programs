#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll tr;
	cout<<"Enter test cases"<<endl;
	cin>>tr;
	while(tr--)
	{
		ll n,max=0,sum=0;
		cout<<"Enter size of array"<<endl;
		cin>>n;
		int a[n];
		cout<<"Enter array elements"<<endl;
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
			if(sum<0)
			{
				sum=0;
			}
			else if(max<sum)
			{
				max=sum;
			}
		}
		cout<<"Max contiguous subarray sum is: "<<max<<endl;
	}
	return 0;
}
