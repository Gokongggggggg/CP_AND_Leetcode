#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int T;
	cin >> T;
	while(T--){
		int n , r , b;
		cin >> n >> r >> b;
		
		int sisa = r % ( b + 1);
		int normal = r / ( b + 1);
		vector<int> idxB;
		int idxBBB = 0;
		while(b > 0){
			if(sisa > 0){
				idxBBB += normal + 2;
				idxB.push_back(idxBBB);
				sisa--;
				b--;
			}else{
				idxBBB += normal + 1;
				idxB.push_back(idxBBB);
				b--;
			}
		}
		
		vector<char> RED( n + 1 , 'R');
		for(int i = 0 ; i < idxB.size() ; i++){
			RED[idxB[i]] = 'B';
		}
		
		for(int i = 1 ; i <= n ; i++){
			cout << RED[i];
		}
		cout << endl;
		
			
	}
	
	
	return 0;
}