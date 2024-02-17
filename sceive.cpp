#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	if(n==0 or n==1){
        cout<<-1;
    }
    else{
	vector<int>v(n+1,1);
	v[0]=0;
	v[1]=0;
    v[n]=0;
	int j;
	for(int i=2;i<=int(sqrt(n));i++)
	{
		j=i+i;
		if(v[i]==1)
		{
		while(j<=n)
		{
			v[j]=0;
			j+=i;
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
 }
