#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
long long int a[1000003],r;
int main()
{
	long long int n,x;
	cin>>n>>x;
	//for (long long int i = 0; i < 100003; ++i)  a[i]=0;
	
	/*for (int i = 1; i <= n; ++i)
	{
		cin>>input[i];
		a[input[i]]++;
	}
	for (int i = 1; i <= n; ++i)
	{
		int c=input[i]^x;
		r+=a[c];
	}
	//cout<<r/2<<endl;
	for (long long int i = 1; i <= n; ++i)
	{
		long long int b;
		cin>>b;
		a[b]++;
		r+=a[b^x];
	}
	*/
		long long int b;

	for (long long int i = 1; i <= n; i++)
	{
		cin>>b;
		r+=a[b^x];
		a[b]++;
	}
	cout<<r<<endl;
	return 0;
}