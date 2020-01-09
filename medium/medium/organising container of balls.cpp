#include <iostream>
#include<algorithm>
using namespace std;
long long a[101][101],cont[101],bal[101];
int main()
{
    int t;
    cin>>t;
    while(t)
    {
     int m;
     int key=1;
 cin>>m;
 for(int i=1;i<=m;i++)
 {cont[i]=0;
    bal[i]=0;}
 for(int i=1;i<=m;i++)
        for(int j=1;j<=m;j++)
 { cin>>a[i][j];
     cont[i]+=a[i][j];
     bal[j]+=a[i][j];
 }
 sort(cont+1,cont+m+1);
 sort(bal+1,bal+m+1);
 for(int i=1;i<=m;i++)
 {
   if(bal[i]!=cont[i])
        {key=-1;
     break;}

 }
 if(key==-1)
    cout<<"IMPOSSIBLE"<<endl;
 else
    cout<<"POSSIBLE"<<endl;
    t--;}
    return 0;
}
