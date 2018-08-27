#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,a[11],n,k=0;
	for(i=1;i<=10;i++)
		cin>>a[i];
	cin>>n;
	for(i=1;i<=10;i++)
		if(a[i]<=n+30)
			k++;
	cout<<k;
	return 0;
}
