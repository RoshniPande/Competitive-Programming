#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long int n,k;
	int t;
	cin>>t;
	//cout<<"t is "<<endl;
	for (int j = 0; j < t; j++)
	{
		cin>>n>>k;
		//cout<<"n is "<<n;
		if (k==0)
		{
			for (int i = 1; i <= n; ++i)
			{				
				cout<<i<<" ";
			}
			cout<<endl;
			continue;
		}
		 int u=1;		
		if (n%2!=0 || (n/k)%2!=0 || (n%k)!=0 || k>n/2 || n%(2*k))
		{
			cout<<"-1"<<endl;
			continue;
		}
		
		else 
		{
			int a[n+1];
			a[0]=0;		
			for (int i = 1; i <= n; ++i)  a[i]=i;
			for (int i = 1; i <= n; ++i)
			{
				/*if ((i%k)<=(k/2))
				{
					swap(a[i],a[i+k])
				}*/			
				if (i<=k*u)
				{
					swap(a[i],a[i+k]);
					continue;
				}
				else
				{
					i=i+k-1;
					u=u+2;
				}
			}
			for (int i = 1; i <= n; ++i)  cout<<a[i]<<" ";
			cout<<endl;
		}		
	}
	return 0;
}
//"https://192.168.0.13:3128/"