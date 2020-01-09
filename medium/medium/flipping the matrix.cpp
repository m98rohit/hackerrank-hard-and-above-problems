#include<iostream>
using namespace std;
long long a[1000][1000];
int main()
{ int t;
cin>>t;
while(t)
{
int siz;
long long int ans=0;
cin>>siz;
for(int i=1;i<=2*siz;i++)
    for(int j=1;j<=2*siz;j++)
      cin>>a[i][j];
      int k=2*siz;
for(int i=1;i<=siz;i++)
    for(int j=1;j<=siz;j++)
      {//cout<<max(max(a[i][j],a[k-i+1][j]),max(a[i][k-j+1],a[k-i+1][k-j+1]))<<endl;
          ans+=max(max(a[i][j],a[k-i+1][j]),max(a[i][k-j+1],a[k-i+1][k-j+1]));
      }
      cout<<ans<<endl;
t--;
}

return 0;}
