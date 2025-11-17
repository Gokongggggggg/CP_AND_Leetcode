#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
int main(){
	
		
		ll x;
		cin >> x;
		ll cnt = 0;
		while(x){
			if(x & 1){
				cnt++;
			}
			x >>= 1;
		}
		
		cout << cnt << endl;
		
	
	
	
	return 0;
}