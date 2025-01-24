#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];	   
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int max = -1;
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++){
				if (a[j] - a[i] > max && a[i] != a[j]) {
					max = a[j] - a[i];
				}
			}
		}
		cout << max << "\n";
	}
}
