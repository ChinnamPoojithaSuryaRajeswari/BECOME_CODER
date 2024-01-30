#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==0 or n==1){
        return false;
    }
	vector<int>v(n+1,1);
	v[0]=0;
	v[1]=0;
    v[n]=0;
	int j,p=0;
	for(int i=2;i*i<=(n);i++)
	{
		j=i*i;
		if(v[i]==1)
		{
		while(j<=n)
		{
			v[j+i]=0;
			j+=i;
			p+=1;
		}
	}
    }
    for(int i=0;i<v.size();i++)
    {
    	if(v[i]==1)
    	{
    		cout<<i<<" ";
		}
	}
 }
