#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define mod9 1e9+7
#define mod7 1e7+7
#define pll pair<ll, ll>
#define vl vector<ll>
#define sl set<ll>
#define db long double
#define vpl vector<pair<ll, ll>>
#define mll map<ll, ll>
#define pb push_back
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define f(i, a, b) for (ll i = a; i < b; ++i)
#define rev(i, a, b) for (ll i = a; i >= b; --i)
#define all(x) x.begin(), x.end()
#define sz(x) (ll)(x).size()
#define print(x) cout << x << endl
#define ct(x) cout << x << " "
#define case (n) cout << "Case #" << n + 1 << ": "
#define endl '\n'
#define F first
#define S second
#define pi 3.1415926536
#define gcd __gcd
#define out(X) cout<<(X?"YES\n":"NO\n")
using namespace std;
bool isSpal(string s){for(int i=0,n=s.size();i<n/2;i++)if(s[i]!=s[n-i-1])return 0;return 1;}
void solve(){
 ll a,b;
 cin>>a>>b;
 if(!a)cout<<1<<endl;
 else cout<<a+2*b+1<<endl;
}
signed main(){
ios::sync_with_stdio(NULL);
cout.tie(0);
cin.tie(0);
tc
solve();
}
/*g++ -g -Wall -Wno-unused-result -Werror=return-type -Werror=main -pipe -O2 -D_FORTIFY_SOURCE=2 -fno-delete-null-pointer-checks -std=c++14 -I/usr/include/jsoncpp Solution.cpp -o Solution -L/usr/include/jsoncpp -lm -ljsoncpp -lpthread -lcurl*/