#include <bits/stdc++.h>
using namespace std;
const int N=25e2+10;

int arr[N];
int dp[N];

int lis(int i){
	if(i<0) return 0;
	if(dp[i]!=-1) return dp[i];
	int ans=1;
	for(int j=0; j<i; j++){
		if(arr[j]<=arr[i]){
			int r=1+lis(j);
			ans=max(ans, r);
		}
	}
	int r2=lis(i-1);
	return dp[i]=max(ans, r2);
}

int main(){
	memset(dp, -1, sizeof(dp));
	int n; cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<lis(n-1)<<endl;
	return 0;
}