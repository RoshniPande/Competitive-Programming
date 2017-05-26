#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	/*long int n,k;
	cin>>n>>k;
	int a[11];
	int j=0,z=0,p=0;
	long int num=n;
	while(n!=0)
	{
		a[j]=n%10;
		n=n/10;
		j++;
	}
	//a[j]='\0';

	if (num < pow(10,k) && num!=0)
	{	
		cout<<j-1<<endl;
	} 
	if (num==0)
	{
		cout<<j<<endl;
	}
	if (num >= pow(10,k))
	{			
		for (int i = 0; i < j; ++i)
		{			
			if (a[i]==0) z++;
			if (a[i]!=0) p++;
			if (z==k)
			{
				break;
			}
		}
		if (z<k) cout<<j-1<<endl;
		else cout<<p<<endl;
	}*/

	string n;
	int k;
	int j=0,z=0,p=0;
	cin>>n;
	cin>>k;
	//int j=0;
	
	for (int i = n.size()-1; i >= 0; i--)
	{
		if (n[i]=='0') z++;
		if (n[i]!='0') p++;
		if (z==k)
		{
			break;
		}
	}

	if (z<k) cout<<n.size()-1<<endl;	
	else cout<<p<<endl;

	return 0;
}