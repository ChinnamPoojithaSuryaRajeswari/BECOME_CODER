#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>v,int index,vector<int>ans,int size)
{
	if(index>=size)
	{
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return ;
	}
	ans.push_back(v[index]);
	subset(v,index+1,ans,size);
	ans.pop_back();
	subset(v,index+1,ans,size);
}
int main()
{
	vector<int>v={1,2,3,4};
	subset(v,0,{},v.size());
}