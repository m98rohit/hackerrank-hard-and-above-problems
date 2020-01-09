#include <iostream>
#include<algorithm>
using namespace std;
int k[20],siz,ans[20],s[20],mini;
void  fun(int n,long long in ,long long a,int prev );
int main()
{ans[0]=999;
mini=9999;
    long long a;
    cin>>a;

    cin>>siz;
    for(int i=0;i<siz;i++)
        cin>>k[i];
        sort(k,k+siz);
    fun(0,1,a,0);
    //cout<<"1 ";
    if(mini==9999)
        cout<<"-1";
    else
    {long long k=1;
    cout<<k<<" ";
    for(int i=0;i<mini;i++)
       {cout<<(k*ans[i])<<" ";
    k=k*ans[i];}}
    return 0;
}
void  fun(int n,long long in ,long long a,int prev )
{ //cout<<n<<" "<<in<<" "<<mini<<endl;
if(n<mini&&in<=a)
{//cout<<in<<endl;
    if(in==a&&n<=mini)
{      mini=n;
        for(int i=0;i<n;i++)
        ans[i]=s[i];

}
//cout<<"kkkkk";
for(int i=prev;i<siz;i++)
{    if(a%(k[i]*in)==0)
    {s[n]=k[i];
 //cout<<k[i]<<" "<<in*k[i]<<endl;
fun(n+1,in*k[i],a,i);}

}
}

}
