#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,p;
    cin>>l;
    vector<int>v;
    for(int i=0;i<l;i++)
    {
        cin>>p;
        v.push_back(p);
    }
    int k=v.size()-1;
    for(int i=0;i<pow(2,v.size());i++)
    {
        while(k>=0)
        {
            if(i&(1<<k)){
                cout<<v[k]<<" ";
            }
            k-=1;
        }
        cout<<endl;
        k=v.size()-1;
    }
    return 0;
}
