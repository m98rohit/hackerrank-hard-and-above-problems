#include<iostream>
using namespace std;
int a[1000],b[1000],ans;
int counter[2][1001];
int main()
{ int n;
cin>>n;
    for(int i=0;i<n;i++)
        {cin>>a[i];
       counter[0][a[i]]++;}
    for(int j=0;j<n;j++)
        {cin>>b[j];
          counter[1][b[j]]++;
          }

   for(int i=1;i<=1000;i++)
        { int q=min(counter[0][i],counter[1][i]);
        ans+=q;
        }
        if(ans==n)
            cout<<n-1;
        else if(n>1)
            cout<<ans+1;
        else
            cout<<ans;
return 0;}
