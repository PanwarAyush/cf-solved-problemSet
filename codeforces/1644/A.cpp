#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t,r,g,b,f;
string s;
cin>>t;
while(t--){
cin>>s;
r=g=b=0;
f=1;
for(int i=0;i<(int)s.size();i++){
	if(s[i]=='r')r=1;
	else if(s[i]=='g')g=1;
	else if(s[i]=='b')b=1;
	else if((s[i]=='R')&&r==0){f=0;break;}
	else if((s[i]=='G')&&g==0){f=0;break;}
    else if((s[i]=='B')&&b==0){f=0;break;}
}
if(f)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}