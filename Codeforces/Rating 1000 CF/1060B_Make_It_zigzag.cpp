#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define debug cout << "Debug" << endl;
using namespace std;

int main(){
	
	ll T;
	cin >> T;
	while(T--){
		
		ll n;
		cin >> n;
		vector<ll> arr(n + 1);
		for(ll i = 1 ; i <= n ; i++){
			cin >> arr[i];
		}
		
		ll max = INT_MIN;
		for(ll i = 1 ; i <= n ; i++){
			if(arr[i] > max){
				max = arr[i];
			}
			if(i % 2 == 0){
				arr[i] = max;
			}
		}
		ll ans = 0;
		ll selisih;
		for(ll i = 1 ; i <= n ; i++){
			if(i == 1 && arr[i] >= arr[i + 1]){
				
				ans += arr[i] - arr[i + 1] + 1; 
				selisih = arr[i] - arr[i + 1];
				arr[i] -= selisih + 1;
			}else if ( i < n && i % 2 == 1 && i != 1){
				if(arr[i] >= arr[i - 1]){
//					cout << "i : " << i << endl;
//					cout << "arr[i] : " << arr[i] << endl;
//					cout << "arr[i + 1] : " << arr[i - 1] << endl;
					ans += arr[i] - arr[i - 1] + 1;
					selisih = arr[i] - arr[i - 1];
					arr[i] -= selisih + 1;
				}
				if(arr[i] >= arr[i + 1]){
					debug
					ans += arr[i] - arr[i + 1] + 1;
					selisih = arr[i] - arr[i + 1];
					arr[i] -= selisih + 1;
				}
			}else if ( i == n && i % 2 == 1){
				if(arr[i] >= arr[i - 1]){
					
					ans += arr[i] - arr[i - 1] + 1;
					selisih = arr[i] - arr[i - 1];
					arr[i] -= selisih + 1;
				}
			}
		}
		cout << ans <<  endl;
		
		
	}
	
	
	
	return 0;
}