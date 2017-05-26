#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int n,m;
	if ((a*1.0)/b > (c*1.0)/d)
	{
		n=(a*d)-(b*c);
		m=a*d;
		a=n;
		b=m;
		while(n!=m)
		{
			if (n>m)
			{
				n=n-m;
			}
			if (n<m)
			{
				m=m-n;
			}
		}
		a=a/n;
		b=b/n;
		cout<<a<<"/"<<b<<endl;
	}
	else if ((a*1.0)/b < (c*1.0)/d)
	{
		n=(b*c)-(a*d);
		m=b*c;
		a=n;
		b=m;
		while(n!=m)
		{
			if (n>m)
			{
				n=n-m;
			}
			if (n<m)
			{
				m=m-n;
			}
		}
		a=a/n;
		b=b/n;
		cout<<a<<"/"<<b<<endl;
	}
	else if ((a*1.0)/b == (c*1.0)/d)
	{
		cout<<"0/1"<<endl;
	}
	return 0;
}