#include <bits/stdc++.h>

#define ll long long
#define pb push_back
using namespace std;

int main(){
	
	ll T;
	cin >> T;
	while(T--){
		ll n;
		cin >> n;
		n--;
		ll tempN = n;
		n = log2(n);
		ll from = powl(2 , n);
		vector<ll> permutation;
		for(ll i = 1 ; i < from ; i++){
			
			permutation.pb(i);
		}
		permutation.pb(0);
		for(ll i = from ; i <= tempN ; i++){
			permutation.pb(i);
		}
		for(ll i = 0 ; i < permutation.size() ; i++){
			cout << permutation[i] << " ";
		}
		cout << endl;
	}
	
	
	
	return 0;
}