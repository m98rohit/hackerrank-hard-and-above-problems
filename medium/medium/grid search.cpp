#include<iostream>
using namespace std;
char a[1000][1000],b[1000][1000];
int main()
{int t;
cin>>t;
   while(t)
   { int r,c;
cin>>r>>c;
for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
       cin>>a[i][j];
int r1,c1;
cin>>r1>>c1;
for(int i=0;i<r1;i++)
    for(int j=0;j<c1;j++)
       cin>>b[i][j];
int yes=0;
for(int i=0;i<=r-r1&&yes==0;i++)
    for(int j=0;j<=c-c1&&yes==0;j++)
        {
       if(a[i][j]==b[0][0]&&a[i][j+c1-1]==b[0][c1-1]&&a[i+r1-1][j]==b[r1-1][0]&&a[i+r1-1][j+c1-1]==b[r1-1][c1-1]&&yes==0)
              {  int key=1;
                 for(int k=0;k<r1&&key==1;k++)
                     for(int l=0;l<c1;l++)
                 { if(a[i+k][j+l]!=b[k][l])
                     {
                         key=0;
                         break;
                     }
                 }
                 if(key==1)
                 yes=1;

                 }
              }
if(yes==1)
    cout<<"YES"<<endl;
 else
    cout<<"NO"<<endl;
t--;}
return 0;}
