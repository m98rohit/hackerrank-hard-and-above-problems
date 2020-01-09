#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int grundy[301];
int counter[301];
int main()
{  grundy[0]=0;
   grundy[1]=1;
   grundy[2]=2;

    //pre computation
  for(int i=3;i<=299;i++)//all possible number of pins
     {
       for(int j=0;j<=299;j++)//make all counts 0
        counter[j]=0;
      //only hitting one pin
            int n=i-1;
        for(int j=i/2;j>=0;j--)
           { //cout<<i<<j<<n-j<<endl;
               counter[grundy[j]^grundy[(n-j)]]=1;}
      //only 2
          n=i-2;
        for(int j=(n+1)/2;j>=0;j--)
           { //cout<<i<<j<<n-j<<endl;
               counter[grundy[j]^grundy[(n-j)]]=1;}
      //grundy number calculation
      int k;
      for( k=0;counter[k]!=0;k++);
      grundy[i]=k;
     }
     //for(int i=0;i<=10;i++)
        //cout<<grundy[i];
     int t;
     cin>>t;
     while(t--)
     { string a;
      int sizew;
      vector<int> l;
      cin>>sizew;
     cin>>a;

      l.push_back(0);
      for(int i=0;i<a.size();i++)
      { if(a[i]=='X')
       l.push_back(0);
       else
        l[l.size()-1]++;
       }

       int n=0;
       for(int i=0;i<l.size();i++)
        n=n^grundy[l[i]];

     if(n==0)
        cout<<"LOSE"<<endl;
     else
        cout<<"WIN"<<endl;
     }

    return 0;
}
