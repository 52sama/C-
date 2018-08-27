#include<bits/stdc++.h>
using namespace std;
int main()
{
	double i=0,n,k=2,d=0;
	cin>>n;
	while(d<n)
	{
		d+=k;
		k=k/100*98;
		i++;
	}
	cout<<i;
	return 0;
}
