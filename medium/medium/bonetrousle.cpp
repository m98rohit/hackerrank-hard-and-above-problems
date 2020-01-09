#include<iostream>
using namespace std;
unsigned long long n,k,a[100001];
long long b;
int main()
{
int t;
cin>>t;
while(t--)
{cin>>n>>k>>b;
 unsigned long long int num=0;
 for(unsigned long long int i=1;i<b;i++)
 num+=i;
 if(n<(b)+num||n>(b*k)-num)
 {cout<<-1<<endl;
 continue;
 }
else
{

       for(long long i=1;i<=b;i++)
        a[i]=i;
if((n-(b+num))%b==0)
 {
     for(long long i=1;i<=b;i++)
        a[i]+=(n-(b+num))/b;

 }
else
{
    for(long long i=1;i<=b;i++)
        a[i]+=(n-(b+num))/b;
 long long counter=0;
for(int i=b;counter<((n-(b+num))%b);i--,counter++)
    a[i]+=1;
//cout<<"mmn"<<b+num<<endl;

}

for(long long i=1;i<=b;i++)
 cout<<a[i]<<" ";
cout<<endl;
}
}
return 0;}
