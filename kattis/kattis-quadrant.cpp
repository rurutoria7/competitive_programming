#include <bits/stdc++.h>
#define int long long
#define de(x) cout << #x << '=' << x << ", "
#define dd cout << '\n';
#define ff first
#define ss second
#define pb push_back
#define rep(i,j,k) for (int i=j; i<=k; i++)
#define minamisan ios::sync_with_stdio(0), cin.tie(0);
using namespace std;
typedef pair<int,int> pii;

signed main(){
	int a, b;
	cin >> a >> b;
	if (a>0 && b>0) cout << 1 << '\n';
	else if (a<0 && b>0) cout << 2 << '\n';
	else if (a<0 && b<0) cout << 3 << '\n';
	else cout << 4 << '\n';
}
