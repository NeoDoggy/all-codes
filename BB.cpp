#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int n,m,k;
vector<int> rk;
int got[200001];
int sch[10001];
vector<int> ath[10001];
signed main(){
	IOS;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
	{
		int tmp;
		cin>>tmp;
		rk.push_back(tmp);
	}
	for(int i =0;i<n+1;i++)
		got[i]=-1;
	for(int i=0;i<m+1;i++)
		sch[i]=k;
	//memset(got,n+1,-1);
	//memset(sch,m+1,k);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			int tmp;
			cin>>tmp;
			if(sch[tmp]!=0&&got[i]==-1)
			{
				got[i]=tmp;
				sch[tmp]--;
				ath[tmp].push_back(i);
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		cout<<k-sch[i];
		for(int j=0;j<sizeof(ath[i]);j++)
		{
			if(ath[i][j]==0)
				break;
			else
				cout<<' ';
			cout<<ath[i][j]; 
		}
		cout<<endl;
	}
	
	return 0;
}


