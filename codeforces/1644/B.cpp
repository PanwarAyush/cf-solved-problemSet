#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
signed main(){
//ios::sync_with_stdio(NULL);
//cin.tie(NULL);
int t,n;
cin>>t;
while(t--){
cin>>n;
for(int i=1;i<=n;i++){
	printf("%d ",i);
	for(int j=n;j>=1;j--){
	if(j!=i)
	printf("%d ",j);
	}
	printf("\n");
}
}
}

