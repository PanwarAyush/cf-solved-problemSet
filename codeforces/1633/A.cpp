#include<iostream>
using namespace std;
int change(int,int);
int main()
{
int  t,n,a,b;
cin>>t;
while(t--)
{
	cin>>n;
	a=n-n%7;
	b=n+(7-n%7);
	if(change(a,n)<change(b,n))
		n=a;
	else 
		n=b;
cout<<n<<endl;	
}
 return 0;	
}
int change(int x,int y)
{
	int c=0;
	while(x!=0||y!=0)
	{
		if(x%10!=y%10)c++;
		x/=10;
		y/=10;
	}
	return c;
}

