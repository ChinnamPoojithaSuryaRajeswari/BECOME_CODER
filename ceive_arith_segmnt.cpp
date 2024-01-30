#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,j,p;
	cin>>n>>m;
	vector<int>v(int(sqrt(m))+1,1);
	v[0]=0;
	v[1]=0;
	for(int i=2;i<v.size();i++)
	{
		j = i;
		while(j+i<v.size())
		{
			v[j+i]=0;
			j+=i;
		}
	}
	vector<int>primes(m-n+1,1);
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==1)
		{
			if(n%i==0)
			{
				p = n;
				p = p-n;
				while(p<primes.size())
				{
					primes[p]=0;
					p+=i;
				}
			}
		   else{
				p = (int(n/i)+1)*i;
				p = p-n;
				while(p<primes.size())
				{
					primes[p]=0;
					p+=i;
				}
			}
		}
	}
	for(int i=0;i<primes.size();i++)
	{
		if(primes[i]==1)
		{
			cout<<n+i<<" r "<<primes[i]<<" p ";
		}
	}
}

