#include<iostream>
#include<algorithm>
using namespace std;
//dont attempt the question through recursion ,do it by dp
unsigned long long a[1001],b[1001],visited[1001];
unsigned long long int stonedivision( unsigned long long  n,int index);
int main()
{
    int m,t;
unsigned long long n;
cin>>t;
while(t)
{cin>>n>>m;
for(int i=1;i<=m;i++)
    visited[i]=0;

for(int i=1;i<=m;i++)
    cin>>a[i];
sort(a+1,a+m+1);
cout<<stonedivision(n,m)<<endl;
t--;}
}
unsigned long long int stonedivision( unsigned long long  n,int index)
{ unsigned long long int max=0,temp;

    for(int i=index;i>0;i--)
      {
        if(n%a[i]==0&&n!=a[i])
      { if(visited[i]==0)
        {
            b[i]=stonedivision(a[i],i-1);
            visited[i]=1;
      }
        temp=1+((n/a[i])*b[i]);
        if(temp>max)
          max=temp;

      }


      }
return max;
}
