#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	static int s=1;
	for(int i=1;i<=n;i++)
	{
		for(int spaces=1;spaces<=n-i;spaces++)
			cout<<" ";
		
		cout<<"1";
		
		int k=s;
		if(i>1)
		{
		while(k--)
		{
			cout<<" ";
		}
		s=s+2;
		cout<<i;
		}
		cout<<endl;
		
	}
	
	
	return 0;
}
