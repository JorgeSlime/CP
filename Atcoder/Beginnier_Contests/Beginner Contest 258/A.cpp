#include <bits/stdc++.h>

using namespace std;

int main(){
	int k; cin>>k;
	cout<<21+k/60<<":"<<(k%60 < 10 ? "0" : "")<<k % 60<<'\n';
	return 0;
}