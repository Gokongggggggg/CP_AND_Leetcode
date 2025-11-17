#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define debug cout << "Debug" << endl;
using namespace std;

ll GCDD(ll a, ll b){
	while( b != 0){
		ll tempN = a % b;
		a = b;
		b = tempN;
	}
	return a;
}

int main(){
	
	ll T;
	cin >> T;
	while(T--){
		
	ll n;
	cin >> n;
	vector <ll> allDifference;
	vector <ll> permutation( n + 1);
	for(ll i = 1 ; i <= n ; i++){
		ll x ;
		cin >> x;
		permutation.pb(x);
		ll selisih = abs(x - i);
		if( selisih != 0){
			allDifference.pb(selisih);
		}
	}
	ll ggg = allDifference[0];
	for(ll i = 1 ; i < allDifference.size(); i++){
		ggg = GCDD(ggg, allDifference[i]);
	}
		cout << ggg << endl;
		
	}
	
	
	
	return 0;
}