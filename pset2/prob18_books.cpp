/*
*
* INCOMPLETE
*
*
*/

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin>>N;
	while(N>0)
	{
		long long int m,k;
		long long int low=0,high=0,mid=0;
		cin>>m>>k;
		long long int a[m];
		for (long long int i = 0; i < m; ++i)
		{
			cin>>a[i];
			high+=a[i];
			if(a[i]>=low) low=a[i];
		}

		if (k==1)
		{
			for (int i = 0; i < m; ++i) cout<<a[i]<<" ";
			N--;
			continue;
		}
		while(low<high)
		{	
			long long int mid=low+(high-low)/2,i,h=1,t=0;
			//cout<<"mid is "<<mid<<endl;
			for (i = 0; i < m; ++i)
			{
				if (t+a[i]<=mid)
				{
					t+=a[i];
					//continue;
				}
				else
				{
					t=a[i];
					h++;
				}
			}

			if (h<=k)
			{
				high=mid;
			}
			else
			{
				low=mid+1;
			}
		}
		long long int i;
		high=0;
		for (i = 0; i < m; i++)
		{
			high+=a[i];
			if (high<low)
			{
				cout<<a[i]<<" ";
				continue;
			}
			else 
			{
				k--;			
				cout<<"/ ";
				high=0; i--;
				if (k==1) { break;}				
			}
		}

		if (k==1 && i<m)
		{
			i++;
			while(i<m)
			{
				cout<<a[i]<<" ";
				i++;
			}
		}
		
		/*high=a[0];
		cout<<a[0]<<" ";
		//int e=k;
		for (i = 1; i < m; i++)
		{
			if (high+a[i]<=low)
			{
				high+=a[i];
				cout<<a[i]<<" ";
				continue;
			}

			else
			{
				k--;
				if (k==0) { break;}
				high=a[i];
				cout<<"/ ";
				cout<<a[i]<<" ";
			}

		}
		if (k==0 && i<m)
		{
			//i--;
			while(i<m)
			{
				cout<<a[i]<<" ";
				i++;
			}
		}*/

		/*long long int f[m+k-1];
		for (int i = m-1; i >=0 ; i--)
		{
			high+=a[i];
			if (high<=low)
			{
				f[m-i-1]=a[i];
				continue;
			}
			else 
			{
				f[m-i-1]=0;
				high=0; i++;
				if (k==1) { break;}
				else if (k!=1) continue;				
			}
		}
*/
		N--;
	}
	return 0;
}
