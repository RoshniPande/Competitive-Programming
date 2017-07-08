#include <bits/stdc++.h>
using namespace std;
stack <int> s;


int dfs(int k, bool vis[],vector<long long int> adj[])
{
	long int j=0;
	while(!s.empty())
	{
		int u=s.top();
		s.pop();
		for (long int i = 0; i < adj[u].size(); ++i)
		{
			int x=adj[u][i];
			if (vis[x]==false)
			 {
			 	s.push(x);
			 	vis[x]=true;
			 	j++;
			 } 
		}
	}
	return j;
}

/*void init(int a[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		a[i]=0;
	}
}*/


int main()
{
	long long int n,p,h,ans=0;
	cin>>n>>p;
	if (n==1 or n==2)
	{
		cout<<0<<endl;
		return 0;
	}
	bool vis[n+2];
	for (long long int i = 0; i <= n; ++i)
	{
		vis[i]=false;
	}
	vector<long long int> adj[n+2];
	///init(adj);
	
	for (long long int i = 1; i <= p; ++i)
	{
		long long int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	long long int vert[n+5]={0},vert_size=0;
	long long int sum[n+5]={0};

	sum[0]=0,h=1;
	for (long long int k = 0; k < n; ++k)
	{
		if (vis[k]==true) continue;
		long long int j=0;
		if (vis[k]==false)
		{
			//cout<<"head "<<k<<endl;
			s.push(k);
			vis[k]=true;
			j=dfs(k,vis,adj);
			vert[h-1]=j+1;
			//cout<<"tot verts "<<vert[h-1]<<endl;
			vert_size++;
			sum[h]=sum[h-1]+j+1;
			h++;
		}
	}
	//cout<<"no.of trees " <<vert_size<<endl;
	ans=0;
	for (long long int i = 2; i <= vert_size; ++i)
	{
		ans+=sum[i-1]*vert[i-1];
	}
	cout<<ans<<endl;


	return 0;
}