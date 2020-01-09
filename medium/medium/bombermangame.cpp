#include<iostream>
using namespace std;
char b[2010][2010],a[2010][2010];
void blast(void );
int isbarren(void);
long long n,r,c;
int main()
{

    cin>>r>>c>>n;
for(int i=1;i<=r;i++)
    for(int j=1;j<=c;j++)
      cin>>b[i][j];

if(isbarren()!=1)
    {
        //cout<<"ola";
        if(n%4==0||n%4==2)
    { for(int i=1;i<=r;i++)
    {
      for(int j=1;j<=c;j++)
          cout<<'O';
    cout<<endl;
    }
}
if(n%4==1)
{ if(n==1)
{
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
      cout<<b[i][j];
    cout<<endl;
    }
}
    else
    {blast();

    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
      b[i][j]=a[i][j];

    }



    blast();

    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
      cout<<a[i][j];
    cout<<endl;
    }
}}
if(n%4==3)
{
    blast();
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
      cout<<a[i][j];
    cout<<endl;
    }
}}
else
{
if(n==1)
{
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
      cout<<b[i][j];
    cout<<endl;
    }
}
else if(n%4==1||n%4==2||n%4==0)
{
    for(int i=1;i<=r;i++)
    {
      for(int j=1;j<=c;j++)
          cout<<'O';
    cout<<endl;
    }
}
 else
 {
    for(int i=1;i<=r;i++)
    {
      for(int j=1;j<=c;j++)
          cout<<'.';
    cout<<endl;
    }
 }
}
return 0;}
int isbarren()
{
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
        {
         a[i][j]='O';
        }
for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
        {  if(b[i][j]=='O')
         {a[i][j]='.';
         a[i-1][j]='.';
         a[i+1][j]='.';
         a[i][j+1]='.';
         a[i][j+1]='.';}
        }
for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
        {
         if(a[i][j]=='O')
           return 0;
        }

return 1;}
void blast(void )
{
     for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
        {
         a[i][j]='O';
        }

for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
        {  if(b[i][j]=='O')
         {//cout<<"deletion"<<i<<j<<endl;
             a[i][j]='.';
         a[i-1][j]='.';
         a[i+1][j]='.';
         a[i][j+1]='.';
         a[i][j-1]='.';}
        }
}
