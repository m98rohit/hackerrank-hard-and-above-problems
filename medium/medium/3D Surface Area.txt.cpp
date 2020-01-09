#include <iostream>

using namespace std;
int a[200][200];
int h,r;
int ans;
int main()
{int fun(int i,int j);
    cin>>h>>r;
    for(int i=1;i<=h;i++)
        for(int j=1;j<=r;j++)
          cin>>a[i][j];

 for(int i=1;i<=h;i++)
        for(int j=1;j<=r;j++)
          ans+=fun(i,j);
 cout<<ans;
    return 0;
}
int fun(int i,int j)
{
    int temp=0;
    if(a[i][j]-a[i-1][j]>0)
    temp+=a[i][j]-a[i-1][j];
    if(a[i][j]-a[i+1][j]>0)
    temp+=a[i][j]-a[i+1][j];
    if(a[i][j]-a[i][j+1]>0)
    temp+=a[i][j]-a[i][j+1];
    if(a[i][j]-a[i][j-1]>0)
    temp+=a[i][j]-a[i][j-1];


return 2+temp;
}
