#include<iostream>
using namespace std;
int main()
{
	long long i=1,a[101],k=1,j;
	while(k!=0)
	{
		cin>>k;
		a[i]=k;
		i++;
	}
	for(j=i-2;j>=1;j--)
		cout<<a[j]<<" ";
	return 0;
}
