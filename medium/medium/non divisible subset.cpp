#include <iostream>
//greedy approach
using namespace std;
long long a[100],ans;
int main()
{ long long int siz,k;
    cin>>siz>>k;
    for(int i=0;i<siz;i++)
    { long long int t;
    cin>>t;
    //cout<<t%k<<endl;
    if(t%k==0)
        a[0]=1;
    else if ( (t%k)*2==k)
        a[t%k]=1;
    else
    a[t%k]++;

    }
   // for(int i=0;i<=k;i++)
     //   cout<<a[i];
       // cout<<endl;
    int valid=1;
 while(valid)
 {
 long long int m=0,in=0;
  for(int i=0;i<k;i++)
  {
      if(a[i]>m)
      {
          m=a[i];
          in=i;
      }


  }
 if(m==0)
    break;
 a[in]=0;
 a[k-in]=0;
  ans+=m;
 }
 cout<<ans;


    return 0;
}
