#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	cout<<"1"<<endl;
	cout<<"1"<<"2"<<endl;
	for(int i=3;i<=n;i++)
	{
		cout<<"1";
		for(int j=3;j<=i;j++)
			cout<<" ";
		cout<<i<<endl;
			
	}
	
	
	
	
	return 0;
}
