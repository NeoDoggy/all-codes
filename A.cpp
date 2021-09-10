#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

vector<int> vi;
int t;
int tmp;


signed main(){
	IOS;
	cin>>t;
	while(t--)
	{
		cin>>tmp;
		vi.push_back(tmp);
	}
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int c=(a+b)/2;
		cout<<vi[c-1]<<endl;
	}
	return 0;
}

