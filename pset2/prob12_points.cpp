#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	long long int n,d,r=0;
	cin>>n>>d;
	long long int a[n],j=0;
	for (int i = 0; i < n; ++i)  //i is rightmost
	{
		cin>>a[i];
		while (a[i]-a[j]>d) j++;	//j will stop at leftmost elem
		if (a[i]-a[j]<=d && i-j>1)
		{
			r+=((i-j)*(i-j-1))/2; // select 2 from i-j pts
		}
	}
	/*for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n-2; ++i)
	{
		j=i+2;
		while(a[j]-a[i]<=d) j++;
		if (a[j]-a[i]>d)
		{
			r+=((j-i-2)*(j-i-1))/2;
		}
	}*/
	cout<<r<<endl;
	return 0;
}