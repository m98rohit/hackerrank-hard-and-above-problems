#include<iostream>
using namespace std;
long int a[10000002];
long long ans=0,maxi=0;
int main()
{ long long siz,m;
    cin>>siz>>m;
    for(int i=1;i<=m;i++)
    { long long f,l,val;
     cin>>f>>l>>val;
     a[f]+=val;
     a[l+1]-=val;
    }
    for(int i=1;i<=siz;i++)
    { ans+=a[i];
    if(ans>maxi)
        maxi=ans;
    }
    cout<<maxi;
return 0;}
