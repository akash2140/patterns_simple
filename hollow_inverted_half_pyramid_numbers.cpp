#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	static int u=n-3;
	for(int i=1;i<=n;i++)
		cout<<i;
	cout<<endl;
	
	for(int i=2;i<n;i++)
	{
		cout<<i;
		int j=u;
		if(u>0)
		{
		while(j--)
			cout<<" ";
		
		u--;
		}
		cout<<n;
		cout<<endl;	
	}
	cout<<n;
	return 0;
}
