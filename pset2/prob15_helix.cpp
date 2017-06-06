#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	while(1)
	{
		int n1,n2;
		cin>>n1;
		if (n1==0)
		{
			break;
		}
		int a[n1+1];
		for (int i = 1; i <= n1; ++i)
		{
			cin>>a[i];
		}
		cin>>n2;
		int b[n2+1];
		for (int i = 1; i <= n2; ++i)
		{
			cin>>b[i];
		}
		a[0]=0; b[0]=0;
		int i=1,j=1,r=0;
		while(i<=n1 || j<=n2)
		{
			if (a[i]==b[j] && i<=n1 && j<=n2)
			{
				a[i]+=a[i-1];
				b[j]+=b[j-1];
				r+=max(a[i],b[j]);
				//cout<<" r in loop is "<<r<<endl;
				//cout<<endl;
				a[i]=0;
				b[j]=0;
				i++,j++;
			}
			else if (a[i]<b[j] && i<=n1)
			{
				a[i]+=a[i-1];
				i++;
			}
			else if (b[j]<a[i] && j<=n2)
			{
				b[j]+=b[j-1];
				j++;
			}

			if (i>n1)
			{
				b[j]+=b[j-1];
				j++;
			}
			if (j>n2)
			{
				a[i]+=a[i-1];
				i++;
			}
			
			if (i>n1 && j>n2)
			{
				r+=max(a[n1],b[n2]);
			}

		}

		cout<<r<<endl;

	}
	return 0;
}