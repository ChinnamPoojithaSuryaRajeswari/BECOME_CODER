#include<bits/stdc++.h>
using namespace std;
void Thought(vector<int>v,int index,vector<int>ans,int size)
{
	if(index >= size)
	{
		for(int i=0;i<ans.size();i++)
		{
		cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	    return ;
	}
	if(ans.size() == 0 || ans.back() < v[index])
	{
		ans.push_back(v[index]);
		Thought(v,index+1,ans,size);
		ans.pop_back();
	}
		Thought(v,index+1,ans,size);
}
int main()
{
	int n,k;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		cin>>k;
		v.push_back(k);
	}
	Thought(v,0,{},n);
}