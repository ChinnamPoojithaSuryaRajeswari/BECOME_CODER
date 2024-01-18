#include<bits/stdc++.h>
using namespace std;
int fib(int n,vector<int>&dp)
{
	if(n==0) return 0;
	if(n==1) return 1;
	if(dp[n-1] == -1){
		dp[n-1] = fib(n-1,dp);
	}
	if(dp[n-2] == -1)
	{
		dp[n-2] = fib(n-2,dp);
	}
	dp[n]=dp[n-1]+dp[n-2];
	return dp[n];
}
int main()
{
	vector<int>dp(30,-1);
	int n;
	cin>>n;
	cout<<fib(n-1,dp);
}