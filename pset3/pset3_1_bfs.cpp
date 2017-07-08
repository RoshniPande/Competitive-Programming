#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	cin>>k;
	queue <int> q;
	while(k>0)
	{
		int n,s;
		long long int m;
		cin>>n>>m;
		int lev[1009]={0};
		bool vis[1009];
		for (int i = 0; i < 1009; ++i)
		{
			vis[i]=false;
		}
		vector <int> adj[n+2];
		//n=nodes, m=edges
		for (long long int i = 0; i < m; ++i)
		{
			int u,v;
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		cin>>s;
		q.push(s);
		lev[s]=0;
		vis[s]= true;
		while(!q.empty())
		{
			int u=q.front();
			q.pop();
			for (int i = 0; i < adj[u].size(); ++i)
			{
				int x=adj[u][i];
				if (vis[x]==false)
				{
					q.push(x);
					lev[x]=lev[u]+1;
					vis[x]=true;
				}
			}
		}
		for (int i = 1; i <= n; ++i)
		{
			if (i==s) continue;
			
			if (vis[i]==false or lev[i]==0)
			{
				cout<<-1<<" ";
				continue;
			}
			else cout<<6*lev[i]<<" ";
		}
		cout<<endl;
		k--;
	}
	
	return 0;
}