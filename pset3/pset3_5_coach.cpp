#include <bits/stdc++.h>
using namespace std;
#define pb push_back
stack <int> s;
std::vector<int> v1;
std::vector<int> v2;
std::vector<int> v3;
int dfs(vector<int> adj[], bool vis[])
{
	int j=1;
	std::vector<int> r;
	while(!s.empty())
	{
		int u=s.top();
		r.pb(u);
		s.pop();
		for (int i = 0; i < adj[u].size(); ++i)
		{
			int x=adj[u][i];
			if (vis[x]==false)
			{				
				j++;
				vis[x]=true;
				s.push(x);
			}
		}
	}
	if (j==2)
	{
		v2.pb(r[0]);
		v2.pb(r[1]);
	}
	else if (j==1)
	{
		v1.pb(r[0]);
	}
	else if (j==3)
	{
		v3.pb(r[0]);
		v3.pb(r[1]);
		v3.pb(r[2]);
	}
	r.clear();
	return j;
}

int main()
{
	int n,m,c=0;
	cin>>n>>m;
	bool vis[n+2];
	if (m==0)
	{
		for (int i = 3; i <= n; ++i)
		{
			cout<<i<<" "<<i-1<<" "<<i-2<<endl;
			i+=2;
		}
		return 0;
	}
	for (int i = 0; i < n+2; ++i)
	{
		vis[i]=false;
	}
	std::vector<int> adj[n+2];
	for (int i = 0; i < m; ++i)
	{
		int x,y;
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for (int i = 1; i <= n; ++i)
	{
		if (vis[i]==false)
		{
			s.push(i);
			vis[i]=true;
			int j=dfs(adj,vis);
			if (j>3)
			{
				cout<<-1<<endl;
				return 0;
			}
			/*else if (j==3)
			{
				cout<<v3[2]<<" "<<v3[1]<<" "<<v3[0]<<endl;
				v3.clear();
				continue;
			}
			else if (j==1)
			{
				v1.pb(i);
				continue;
			}
			cout<<"reached "<<i<<endl;*/
		}
	}
	if (v2.size()/2 > v1.size())
	{
		cout<<-1<<endl;
		return 0;
	}
	int j=0;
	for (int i = 2; i <= v3.size(); ++i)
	{
		cout<<v3[i]<<" "<<v3[i-1]<<" "<<v3[i-2]<<endl;
		i+=2;
	}
	for (int i = 1; i <= v2.size(); ++i)
	{
		cout<<v2[i]<<" "<<v2[i-1]<<" "<<v1[j]<<endl;
		j++;
		i++;
	}
	//cout<<"j is "<<j<<endl;
	//cout<<"v1.size() "<< v1.size()<<endl;
	if (j<v1.size())
	{
		for (int i = j; i <= v1.size()-2; ++i)
		{
			cout<<v1[i]<<" "<<v1[i+1]<<" "<<v1[i+2]<<endl;
			i+=2;
		}
	}
	
	return 0;
}