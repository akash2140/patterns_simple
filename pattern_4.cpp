#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	int b;
	cin>>b;
	
	for(int i=0;i<n;i++)
		cout<<"*";
	cout<<"\n";
	
	for(int i=1;i<n-1;i++)
	{
		cout<<"*";
		for(int j=1;j<n-1;j++)
			cout<<" ";
		cout<<"*";
		cout<<"\n";
	}
	
	
	for(int i=0;i<n;i++)
		cout<<"*"
	
	return 0;
}
