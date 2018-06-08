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
		ll m,n,x;
		cout<<"Enter no of rows in matrix"<<endl;
		cin>>m;
		cout<<"Enter no of columns in matrix"<<endl;
		cin>>n;
		int a[m][n];
		cout<<"Enter elements of matrix"<<endl;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		cout<<"Enter element to find"<<endl;
		cin>>x;
		ll i=0,j=n-1;
		while(i<m && j>=0)
		{
			if(a[i][j]==x)
			{
				printf("%d found at position row: %d , column: %d",x,i+1,j+1);
				cout<<endl;
				break;
			}
			if(a[i][j]>x)
			j--;
			else
			i++;
		}
	}
	return 0;
}
