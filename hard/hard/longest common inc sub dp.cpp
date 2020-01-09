#include<iostream>
using namespace std;
int a[2000000],b[2000000],maxi;
int main()
{ int s;
    cin>>s;
    for(int i=0;i<s;i++)
        cin>>a[i];
    b[0]=1;
    maxi=1;
    for(int i=1;i<s;i++)
        {for(int j=i-1;j>=0;j--)
         {
           if(a[j]<a[i])
           { if(b[j]>b[i])
              b[i]=b[j];
           }
         }
        b[i]++;
        if(b[i]>maxi)
            maxi=b[i];
        }
        cout<<maxi;
return 0;}
