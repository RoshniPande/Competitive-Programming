#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	long long int n,m;
	cin>>n>>m;
	if (n<=m)
	{
		cout<<n<<endl;
		return 0;
	}
	else
	{	
		long long int low=0,high=1e10;
		
		while(low<high)
		{
			long long int mid=low+(high-low)/2,x=(mid*(mid+1))/2;
			if (n-x > m)
			{				
				low=mid+1;
			}
			else
			{
				high=mid;				
			}
		}

		cout<<m+low<<endl;
	}

	return 0;
}