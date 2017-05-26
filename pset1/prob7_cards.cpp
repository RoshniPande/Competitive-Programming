#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int i=n-1,j=n-1;
	int fv=n,fs=0;
	while(i>=0)
	{
		if (b[j]>=a[i])
		{
			fv--;
			j--;
		}
		i--;
		
	}
    
    j=n-1;
    i=n-1;	
	while(i>=0)
	{
		if (b[j]>a[i])
		{
			fs++;
			j--;
		}
		i--;
		
	} 
	cout<<fv<<endl;
	cout<<fs<<endl;
	return 0;
	/*int fv=0,fs=0;
	while(i>=0)
	{
		if (b[j]<a[i])
		{
			fv++;
			
		}
		i--;
		j--;		
	}
    
    j=n-1;
    i=n-1;
	
	while(i>=0)
	{
		if (b[j]>a[i])
		{
			fs++;
		}
		i--;
		j--;		
	} */
}