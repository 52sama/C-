#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,k=0;
	cin>>n>>m;
	int a[n+1],b[m+1][3];
	for(i=0;i<=n;i++)
		a[i]=1;
	for(i=1;i<=m;i++)
		cin>>b[i][1]>>b[i][2];
	for(i=1;i<=m;i++)
		for(j=b[i][1];j<=b[i][2];j++)
			a[j]=0;
	for(i=0;i<=n;i++)
		if(a[i]==1)
			k++;
	cout<<k;
	return 0;
} 	
