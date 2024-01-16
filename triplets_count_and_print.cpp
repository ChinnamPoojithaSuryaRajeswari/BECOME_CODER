#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={0,2,1,3};
    map<int,int>mp;
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        mp[v[i]]+=1;
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            mp[v[i]]-=1;
            mp[v[j]]-=1;
            if(mp[v[i]+v[j]]>0)
            {
                cout<<v[i]<<" "<<v[j]<<" "<<v[i]+v[j]<<endl;
                count+=1;
            }
            mp[v[i]]+=1;
            mp[v[j]]+=1;
        }
    }
    cout<<count;
}
