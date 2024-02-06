#include<bits/stdc++.h>
using namespace std;
void comb_rec(vector<int>v,int index,vector<int>ans,int n,int target,int s){
	if(index>=n || target==s){
		if(index>=n and s!=target){
			return;
		}
		else{
			for(int i=0;i<ans.size();i++){
				cout<<ans[i]<<" ";
			}
			cout<<endl;
			return ;
		}
	}
	else if(s==target){
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	else if(target < s){
		return ;
	}
	ans.push_back(v[index]);
	comb_rec(v,index,ans,n,target,s+v[index]);
	ans.pop_back();
	comb_rec(v,index+1,ans,n,target,s);
}
int main()
{
	int n,k;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		cin>>k;
		v.push_back(k);
	}
	int target;
	cin>>target;
	comb_rec(v,0,{},n,target,0);
}