#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,ans=0,c=0,l,r;
 string s;
 cin>>t;
 while(t--)
 {
	 ans=0;
	 c=0;l=0;r=0;
	 cin>>s;
	 for(char i:s)
	 {
		 if(i=='0')
			 l++;
		 else r++;
		 if(l-r!=0)
			 c=max(c,min(l,r));
	 }
	 cout<<c<<endl;
 }
return 0;	
}

