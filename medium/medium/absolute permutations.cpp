#include <iostream>

using namespace std;

int a[100001],used[100001];
int  fun(long int i,int n,long int k);
int main()
{
    int q;
    cin>>q;
    while(q)
    { long long n,k,key;
    key=0;
    cin>>n>>k;
        int ans[100001];
    key=fun(1,n,k);
    if(key==1)
    {
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";
    }
    else
        cout<<key;
        cout<<endl;
        for(int i=1;i<=n;i++)
            used[i]=0;
    q--;}
    return 0;
}
int  fun(long int i,int n,long int k)
{ if(i==n+1)
  return 1;
long neg,pos;
neg=i-k;
pos=i+k;
//cout<<neg<<"ses"<<endl;
if(neg>0&&used[neg]==0)
 {  // cout<<neg<<"ses"<<endl;
     used[neg]=1;
     a[i]=neg;
    return fun(i+1,n,k);
    }
 if(neg>0)
    used[neg]=0;
if(pos<=n&&used[pos]==0)
 {
     used[pos]=1;
     a[i]=pos;
    return fun(i+1,n,k);
    }

return -1;

}
