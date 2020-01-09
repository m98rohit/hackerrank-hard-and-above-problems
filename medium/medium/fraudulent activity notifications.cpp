#include<iostream>
using namespace std;
long long a[200001],frequency[202],counter[201],ans;
int main()
{ long long n,t;
cin>>n>>t;
    for(long long i=1;i<=n;i++)
        {cin>>a[i];}
    for(long long int i=1;i<=t;i++)
         {counter[a[i]]++;}
    frequency[0]=counter[0];

    for(int i=1;i<=201;i++)
         {frequency[i]=frequency[i-1]+counter[i];}
    for(long long i=t+1;i<=n;i++)
    {
      if(t%2==0)
      { long long a1,a2,v1,v2;
          a1=t/2;
          a2=a1+1;

         for(int j=0;j<=201;j++)
           { if(frequency[j]>=a1)
               {v1=j;
               break;}
           }
         for(int j=0;j<=201;j++)
           { if(frequency[j]>=a2)
               {v2=j;
               break;}
           }

      if(v1+v2<=a[i])
       ans++;

      for(int j=a[i-t];j<=201;j++)
        frequency[j]--;
      for(int j=a[i];j<=201;j++)
        frequency[j]++;
      }
    else
    { long long a1,v1;
      a1=(t+1)/2;

         for(int j=0;j<=201;j++)
           { if(frequency[j]>=a1)
               {v1=j;
               break;}
           }

    if(2*v1<=a[i])
     ans++;

    for(int j=a[i-t];j<=201;j++)
        frequency[j]--;
      for(int j=a[i];j<=201;j++)
        frequency[j]++;}
    }
     cout<<ans;
return 0;}
