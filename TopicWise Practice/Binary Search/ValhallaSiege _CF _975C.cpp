//https://codeforces.com/problemset/problem/975/C


/*


███╗░░██╗███████╗██╗░░░██╗███████╗██████╗░  ░██████╗░██╗██╗░░░██╗███████╗
████╗░██║██╔════╝██║░░░██║██╔════╝██╔══██╗  ██╔════╝░██║██║░░░██║██╔════╝
██╔██╗██║█████╗░░╚██╗░██╔╝█████╗░░██████╔╝  ██║░░██╗░██║╚██╗░██╔╝█████╗░░
██║╚████║██╔══╝░░░╚████╔╝░██╔══╝░░██╔══██╗  ██║░░╚██╗██║░╚████╔╝░██╔══╝░░
██║░╚███║███████╗░░╚██╔╝░░███████╗██║░░██║  ╚██████╔╝██║░░╚██╔╝░░███████╗
╚═╝░░╚══╝╚══════╝░░░╚═╝░░░╚══════╝╚═╝░░╚═╝  ░╚═════╝░╚═╝░░░╚═╝░░░╚══════╝

██╗░░░██╗██████╗░██╗██╗██╗
██║░░░██║██╔══██╗██║██║██║
██║░░░██║██████╔╝██║██║██║
██║░░░██║██╔═══╝░╚═╝╚═╝╚═╝
╚██████╔╝██║░░░░░██╗██╗██╗
░╚═════╝░╚═╝░░░░░╚═╝╚═╝╚═╝

██████╗░███████╗███╗░░░███╗███████╗███╗░░░███╗██████╗░███████╗██████╗░░░░  ████████╗██╗░░██╗░█████╗░████████╗
██╔══██╗██╔════╝████╗░████║██╔════╝████╗░████║██╔══██╗██╔════╝██╔══██╗░░░  ╚══██╔══╝██║░░██║██╔══██╗╚══██╔══╝
██████╔╝█████╗░░██╔████╔██║█████╗░░██╔████╔██║██████╦╝█████╗░░██████╔╝░░░  ░░░██║░░░███████║███████║░░░██║░░░
██╔══██╗██╔══╝░░██║╚██╔╝██║██╔══╝░░██║╚██╔╝██║██╔══██╗██╔══╝░░██╔══██╗██╗  ░░░██║░░░██╔══██║██╔══██║░░░██║░░░
██║░░██║███████╗██║░╚═╝░██║███████╗██║░╚═╝░██║██████╦╝███████╗██║░░██║╚█║  ░░░██║░░░██║░░██║██║░░██║░░░██║░░░
╚═╝░░╚═╝╚══════╝╚═╝░░░░░╚═╝╚══════╝╚═╝░░░░░╚═╝╚═════╝░╚══════╝╚═╝░░╚═╝░╚╝  ░░░╚═╝░░░╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░

░█████╗░███████╗████████╗███████╗██████╗░  ███████╗██╗░░░██╗███████╗██████╗░██╗░░░██╗
██╔══██╗██╔════╝╚══██╔══╝██╔════╝██╔══██╗  ██╔════╝██║░░░██║██╔════╝██╔══██╗╚██╗░██╔╝
███████║█████╗░░░░░██║░░░█████╗░░██████╔╝  █████╗░░╚██╗░██╔╝█████╗░░██████╔╝░╚████╔╝░
██╔══██║██╔══╝░░░░░██║░░░██╔══╝░░██╔══██╗  ██╔══╝░░░╚████╔╝░██╔══╝░░██╔══██╗░░╚██╔╝░░
██║░░██║██║░░░░░░░░██║░░░███████╗██║░░██║  ███████╗░░╚██╔╝░░███████╗██║░░██║░░░██║░░░
╚═╝░░╚═╝╚═╝░░░░░░░░╚═╝░░░╚══════╝╚═╝░░╚═╝  ╚══════╝░░░╚═╝░░░╚══════╝╚═╝░░╚═╝░░░╚═╝░░░

██████╗░░█████╗░██████╗░██╗░░██╗  ███╗░░██╗██╗░██████╗░██╗░░██╗████████╗
██╔══██╗██╔══██╗██╔══██╗██║░██╔╝  ████╗░██║██║██╔════╝░██║░░██║╚══██╔══╝
██║░░██║███████║██████╔╝█████═╝░  ██╔██╗██║██║██║░░██╗░███████║░░░██║░░░
██║░░██║██╔══██║██╔══██╗██╔═██╗░  ██║╚████║██║██║░░╚██╗██╔══██║░░░██║░░░
██████╔╝██║░░██║██║░░██║██║░╚██╗  ██║░╚███║██║╚██████╔╝██║░░██║░░░██║░░░
╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝  ╚═╝░░╚══╝╚═╝░╚═════╝░╚═╝░░╚═╝░░░╚═╝░░░

████████╗██╗░░██╗███████╗██████╗░███████╗  ██╗░██████╗  ░█████╗░
╚══██╔══╝██║░░██║██╔════╝██╔══██╗██╔════╝  ██║██╔════╝  ██╔══██╗
░░░██║░░░███████║█████╗░░██████╔╝█████╗░░  ██║╚█████╗░  ███████║
░░░██║░░░██╔══██║██╔══╝░░██╔══██╗██╔══╝░░  ██║░╚═══██╗  ██╔══██║
░░░██║░░░██║░░██║███████╗██║░░██║███████╗  ██║██████╔╝  ██║░░██║
░░░╚═╝░░░╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝╚══════╝  ╚═╝╚═════╝░  ╚═╝░░╚═╝

██████╗░██████╗░██╗░██████╗░██╗░░██╗████████╗  ░██████╗██╗░░░██╗███╗░░██╗███╗░░██╗██╗░░░██╗
██╔══██╗██╔══██╗██║██╔════╝░██║░░██║╚══██╔══╝  ██╔════╝██║░░░██║████╗░██║████╗░██║╚██╗░██╔╝
██████╦╝██████╔╝██║██║░░██╗░███████║░░░██║░░░  ╚█████╗░██║░░░██║██╔██╗██║██╔██╗██║░╚████╔╝░
██╔══██╗██╔══██╗██║██║░░╚██╗██╔══██║░░░██║░░░  ░╚═══██╗██║░░░██║██║╚████║██║╚████║░░╚██╔╝░░
██████╦╝██║░░██║██║╚██████╔╝██║░░██║░░░██║░░░  ██████╔╝╚██████╔╝██║░╚███║██║░╚███║░░░██║░░░
╚═════╝░╚═╝░░╚═╝╚═╝░╚═════╝░╚═╝░░╚═╝░░░╚═╝░░░  ╚═════╝░░╚═════╝░╚═╝░░╚══╝╚═╝░░╚══╝░░░╚═╝░░░

███╗░░░███╗░█████╗░██████╗░███╗░░██╗██╗███╗░░██╗░██████╗░██╗██╗██╗
████╗░████║██╔══██╗██╔══██╗████╗░██║██║████╗░██║██╔════╝░██║██║██║
██╔████╔██║██║░░██║██████╔╝██╔██╗██║██║██╔██╗██║██║░░██╗░██║██║██║
██║╚██╔╝██║██║░░██║██╔══██╗██║╚████║██║██║╚████║██║░░╚██╗╚═╝╚═╝╚═╝
██║░╚═╝░██║╚█████╔╝██║░░██║██║░╚███║██║██║░╚███║╚██████╔╝██╗██╗██╗
╚═╝░░░░░╚═╝░╚════╝░╚═╝░░╚═╝╚═╝░░╚══╝╚═╝╚═╝░░╚══╝░╚═════╝░╚═╝╚═╝╚═╝



*/


#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, q;
	cin >> n >> q;
	std::vector<ll> a(n);
	for (ll &x : a)cin >> x;

	ll sum[n] = {0};
	sum[0] = a[0];
	for (ll i = 1; i < n; i++)
	{
		sum[i] = a[i] + sum[i - 1];
	}
//	for(ll x : sum)cout<<x<<" ";

	int s = 0;
	ll qs = 0;
	for (ll i = 0; i < q; i++)
	{
		ll query ;
		cin >> query;
		qs += query;
		if (qs >= sum[n - 1]) {
			cout << n << endl;
			qs = 0;
		}
		else
		{
			ll pos = upper_bound (sum , sum + n, qs) - sum;
			if (qs == sum[pos - 1])cout << n - pos << endl ;
			// cout<<pos <<" ";
			else	cout << n -  pos   << endl;
		}
	}



}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	/*
	 #ifndef ONLINE_JUDGE
	 freopen("input.txt", "r", stdin);
	 freopen("output.txt", "w", stdout);
	 #endif
	*/

	solve();
	cout << "\n";


	return 0;
}

