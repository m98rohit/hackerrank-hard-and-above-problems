#include <iostream>
#include<algorithm>
using namespace std;
unsigned long long a[1001][2000][2],v[1001][2000][2],arr[2001];
unsigned long long fun(int  x,int y ,int k);
int main()
{
int t;
cin>>t;
while(t--)
{
 int siz;

 int x=0,y=0;
 cin>>siz;
 for(int i=1;i<=siz;i++)
    cin>>arr[i];
 sort(arr+1,arr+siz+1);
 for(int i=1;i<=siz;i++)
    {
        if(arr[i]==arr[i+1])
            {x++;
            i++;}
            else
             y++;
    }
cout<<fun(x,y,-1)<<endl;

}
    return 0;
}
unsigned long long fun(int x,int y,int k)
{  if(x<=0&&y<=0)
  return 1;

long long l,r;
if(k==-1)
{
return (((x*fun(x-1,y+1,1))%1000000007)+((y*fun(x,y-1,0))%1000000007))%1000000007;
}
else if(k==0)
{ l=0,r=0;
    if(x>0)
{if(v[x-1][y+1][1]!=0)
 l=a[x-1][y+1][1];
else
 {v[x-1][y+1][1]=1;
     a[x-1][y+1][1]=fun(x-1,y+1,1);
 l=a[x-1][y+1][1];
 }}
 if(y>0)
 {if(v[x][y-1][0]!=0)
 r=a[x][y-1][0];
else
 {v[x][y-1][0]=1;
     a[x][y-1][0]=fun(x,y-1,0);
     r=a[x][y-1][0];
 }}
return (((x*l)%1000000007)+((y*r)%1000000007))%1000000007;
}
else //k==1
{ l=0;
 if(x>0)
{if(v[x-1][y+1][1]!=0)
 l=a[x-1][y+1][1];
else
 {v[x-1][y+1][1]=1;
     a[x-1][y+1][1]=fun(x-1,y+1,1);
 l=a[x-1][y+1][1];
 }}
 if(y>0)
 {if(v[x][y-1][0]!=0)
 r=a[x][y-1][0];
else
 {v[x][y-1][0]=1;
     a[x][y-1][0]=fun(x,y-1,0);
     r=a[x][y-1][0];
 }}

return (((x*l)%1000000007)+(((y-1)*r)%1000000007))%1000000007;
}
}
