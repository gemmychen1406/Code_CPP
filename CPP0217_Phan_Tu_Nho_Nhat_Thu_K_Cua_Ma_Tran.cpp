#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n * n];
		for (int i = 0; i < n * n; i++){
			cin >> a[i];
		}	   
		sort(a, a + n * n);
		cout << a[k - 1];
		cout << "\n";
	}
}
