#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	int j;
	for(int i=1;i<=n;i++)
	{
		for(int spaces=1;spaces<=n-i;spaces++)
			cout<<" ";
		
		int k=i;
		for(j=i;k>=1;k--,j++)
			cout<<j;
		
		int s=j-1;
		if(i>1)
		{
			for(int k=1;k<=i-1;k++)
				cout<<--s;
		}
		cout<<endl;
		
	}
		
	return 0;
}
