#include<iostream>
using namespace std;
int main()
{
	unsigned long long x,n,i,s=0;
	cin>>x>>n;
	for(i=1;i<=n;i++)
	{
		if((x!=6)&&(x!=7))
			s+=250;
		if(x==7)
			x=1;
		else 
			x++;
	} 
	cout<<s;
	return 0;
}
