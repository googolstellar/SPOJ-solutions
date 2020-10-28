// LASTDIG - The last digit
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
	ll t, a, b;
	ll ar[11] = {0, 1, 4, 4, 2, 1, 1, 4, 4, 2, 1};
	cin >> t;
	while(t--) {
		cin >> a >> b;
		if(a == 0) {
			cout << 0 << endl;
			continue;
		}
		if(b == 0) {
			cout << 1 << endl;
			continue;
		}
		ll la = a % 10;
		if(la == 0)
			la = 10;
		ll rem = b % ar[la];
		if(rem == 0)
			rem = ar[la];
		ll p = 1;
		for(ll i = 0; i < rem; i++)
			p *= a;
		cout << p % 10 << endl;
	}
}




#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main () {
	ll n;
	cin >> n;
	while(n--) {
		ll a, b, sum = 0, ta = 0, tb = 0, tsum = 0;
		cin >> a >> b;
		while(a) {
			ta = 10 * ta + a % 10;
			a /= 10;
		}
		while(b) {
			tb = 10 * tb + b % 10;
			b /= 10;
		}
		sum = ta + tb;
		while(sum) {
			tsum = 10 * tsum + sum % 10;
			sum /= 10;
		}
		cout << tsum << "\n";
	}
}

