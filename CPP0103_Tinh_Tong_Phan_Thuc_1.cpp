#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	double sum = 0;
	for (int i = 1; i <= n; i++) sum += 1.0*1/i;
	cout << setprecision(4) << fixed << sum;	   

}
