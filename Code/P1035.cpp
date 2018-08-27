#include<bits/stdc++.h>
using namespace std;
int main()
{
	double i=0,k,n=0,s=1.0000;
	cin>>k;
	while(k>n)
	{
		i++;
		n+=s/i;
	}
	cout<<i;
	return 0;
}
