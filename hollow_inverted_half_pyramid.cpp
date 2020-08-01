#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
		cout<<"*";
	
	cout<<"\n";
	
	for(int i=1;i<n-1;i++)
	{
		cout<<"*";
		for(int j=1;j<=n-i-2;j++)
			cout<<" ";
		
		cout<<"*"<<"\n";
	}
	
	cout<<"*";
	return 0;
}
