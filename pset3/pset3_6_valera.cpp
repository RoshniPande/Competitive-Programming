#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define for(i,a,b) for(int i = a; i < b; ++i)
#define lli long long int 
std::vector<int> v;
int main()
{
	int n,m,k,j=1;
	cin>>n>>m>>k;
	for(i,1,n+1)
	{
		if (j==1)
		{
			while(1){v.pb(i);
					 v.pb(j);
					 j++;
					 if (j==m+1) break;}
			j--; 
			continue;
		}
		if (j==m)
		{
			while(1){v.pb(i);
					 v.pb(j);
					 j--;
					 if (j==0) break;}
			j++;
			continue;
		}
	}
	j=0;
	if (k==1)
	{
		cout<<n*m<<" ";
		for(j,0,v.size())
		{
			cout<<v[j]<<" "<<v[j+1]<<" ";
			j++;
		}
		return 0;
	}
	int cells=0;
	while(k>1)
	{
		cout<<2<<" "<<v[j]<<" "<<v[j+1]<<" "<<v[j+2]<<" "<<v[j+3]<<endl;
		j+=4;
		cells+=2;
		k--;
	}
	//cout<<"v.size() "<<v.size()<<endl;
	//cout<<"j "<<j<<endl;
	cout<<(v.size()/2)-cells<<" ";
	for(i,j,v.size())
	{
		cout<<v[i]<<" ";
	}
	
	return 0;
}


/*vector<pair <int,int> > v3;

void rev(vector<pair <int,int> > v1,vector<pair <int,int> > v2)
{
	v3.reserve(v1.size()+v2.size());
	reverse(v2.begin(),v2.end());
	v3.insert(v3.end(), v1.begin(), v1.end());
	v3.insert(v3.end(), v2.begin(), v2.end());
	for(i,0,v3.size())
	{
		cout<<v3[i].first<<" "<<v3[i].second<<endl;
	}
}

int main()
{
	int n,m,k,flag=0,p=1;
	cin>>n>>m>>k;
	std::vector<pair <int,int> > v1;
	std::vector<pair <int,int> > v2;
	for(i,0,n)	
	{
		for(j,0,m)
		{
			if (i%2==0) v1.pb(make_pair(i,j));
			else if (i%2==1) v2.pb(make_pair(i,j));
			flag++;
		}
		if (flag==2)
		{
			flag=0;
			rev(v1,v2);
		}
	}
	cout<<"final "<<endl;
	for(i,0,v3.size())
	{
		cout<<v3[i].first<<" "<<v3[i].second<<endl;
	}
	return 0;
}*/