#include<bits/stdc++.h>
using namespace std;
void gen_permu_rec(string s,int start,int end)
{
	if(start==end){
		// cout<<s<<endl;
		return ;
	}
	for(int i = start ; i <= end ; i++)
	{
		swap(s[start],s[i]);
		cout<<s<<" "<<start<<" "<<i<<endl;
		gen_permu_rec(s,start+1,end);
		cout<<start<<" "<<i<<endl;
		swap(s[start],s[i]);
		cout<<s<<endl;
	}
}
int main()
{
	string s;
	cin>>s;
	gen_permu_rec(s,0,s.size()-1);
}