#include <iostream>
using namespace std;
long int n,a[100001],ct[100001];
int main()
{   int t;
    cin>>t;
    while(t)
    {  //cout<<"okay"<<t;
        long int n,key=0,swaps=0;
     key=0;
     swaps=0;
    cin>>n;
     for(int i=1;i<=n;i++)
        {cin>>a[i];
}

     for(int i=n;i>0;i--)
     { int counter=0;
        if(a[i]-i>2)
        {
            key=1;
            break;
        }
        long r=1;
        for(int j=max(r,a[i]-1);j<i;j++)
        {
            if(a[j]>a[i])
            counter++;

             }
//cout<<counter<<endl;
            swaps+=counter;

             }
            if(key==0)
                cout<<swaps<<endl;
            else
                cout<<"Too chaotic"<<endl;
   t--;
   }
    return 0;
}
