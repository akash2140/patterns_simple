#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cout<<"enter the length of the rectangle";
	cin>>n;
	
	int b;
	cout<<"enter the breadth of the rectanle";
	cin>>b;
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<b;j++)
			cout<<"*";
		cout<<"\n";
	}

	return 0;
}
