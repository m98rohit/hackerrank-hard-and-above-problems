#include<iostream>
using namespace std;
long long int a[100000];
int main()
{
int t;
cin>>t;
while(t)
{
long int count=1,siz;
cin>>siz;
for(long int i=0;i<siz;i++)
    { cin>>a[i];
     if(i>0)
      { if(a[i]>a[i-1])
          {count++;
          a[i-1]=a[i];
          }
        else
          a[i]=a[i-1];
      }
    }
if(count%2==0)
 cout<<"ANDY"<<endl;
 else
 cout<<"BOB"<<endl;
t--;}
return 0;}
