#include <iostream>

using namespace std;
long long a[1001],ans,counter;
void fun(long long initial ,long long index,long long num);
long long exp(long long n,long long pow);
int main()
{
     long long num,m;
    cin>>num>>m;

    for(int i=1;i<num&&exp(i,m)<=num;i++)
      {a[i]=exp(i,m);counter++;}
    fun(0,0,num);
    cout<<ans;
    return 0;
}
long long exp(long long n,long long pow)
{ long long t=n;
    for(long long int i=2;i<=pow;i++)
       n=n*t;
return n;}
void fun(long long initial,long long index,long long num)
{
if(initial ==num)
        ans++;
else
{
 for(int i=index+1;i<=counter&&initial+a[i]<=num;i++)
   fun(initial+a[i],i,num);
}
}
