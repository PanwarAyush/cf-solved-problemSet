#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	auto chk=[](vector<int>a){
	for(unsigned i=0;i<a.size()-1;i++)if(a[i]>a[i+1])return "YES\n";
	return "NO\n";
	};
	int n,t;
    cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int>a(n);
		for(int &i:a)cin>>i;
		cout<<chk(a);
	}
}
  