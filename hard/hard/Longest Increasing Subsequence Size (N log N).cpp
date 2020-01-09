#include <iostream>
using namespace std;
//for reference watch tushar coding made simple vedio on this topic
long lvalue[2000000],a[1000000];
long bin(long l,long h,long k);
int main()
{
    long int siz;
    cin>>siz;
    for(int i=0;i<siz;i++)
    cin>>a[i];
    lvalue[1]=a[0];
    long len=1;
    for(int i=0;i<siz;i++)
      {

      if(a[i]>lvalue[len])
      {
          lvalue[++len]=a[i];
      }
      else
      { long k=bin(1,len,a[i]);
          if(lvalue[k]!=a[i])
          {
              lvalue[k+1]=a[i];
          }
      }
      }
      cout<<len;
    return 0;
}
long bin(long l,long h,long k)
{
  if(h<l)
        return l-1;
else
{
 long mid=(l+h)/2;
if(lvalue[mid]==k)
return mid;
else if(lvalue[mid]>k)
return bin(l,mid-1,k);
else
return bin(mid+1,h,k);
}
}
