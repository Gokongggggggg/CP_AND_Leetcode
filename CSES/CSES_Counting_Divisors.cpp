#include<bits/stdc++.h>

using namespace std;

long long primeFC(long long n){
	long long sum = 1;
	long long cnt = 0;
	for(int i = 2 ; i * i <= n ; i++){
		cnt = 0;
		while(n % i == 0){
			cnt++;
			n /= i;
		}
		if ( cnt > 0){
			cnt++;
			sum *= cnt;
		}
	}
	if( n > 1){
		
		sum *= 2;
		
	}
	return sum;
}

int main(){
	
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		long long res = primeFC(n);
		cout << res << endl;
	}
	
	return 0;
}