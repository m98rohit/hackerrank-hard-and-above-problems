#include <iostream>

using namespace std;
//approach
//use a bubble sort type approach
int main()
{ int a[1001],n,t;
    cin>>t;
    while(t)
{ int sex=0;
 cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
for(int i=1;i<=(n-3+1)&&sex==0;i++)
{
  for(int j=1;j<=(n-3+1)-i+1;j++)
     { //cout<<"sex="<<sex<<endl;
    if(a[j]==j&&a[j+1]==j+1&&a[j+2]==j+2)
     {
        //cout<<"continue"<<j;
     continue;}
    //make 3 cases
     if(a[j]>a[j+1]&&a[j]>a[j+2])
       {


         { int t1,t2,t3;
         t1=a[j];
         t2=a[j+1];
         t3=a[j+2];
             a[j+2]=t1;
             a[j]=t2;
             a[j+1]=t3;
         }
       }
    else if(a[j+1]>a[j]&&a[j+1]>a[j+2])
       {

         { int t1,t2,t3;
         t1=a[j];
         t2=a[j+1];
         t3=a[j+2];

             a[j+2]=t2;
             a[j]=t3;
             a[j+1]=t1;
         }
       }
       else
       continue;

    }


}
for(int i=1;i<=n;i++)
{
    if(a[i]!=i)
    {
        sex=1;
        break;
    }
}
if(sex==0)
    cout<<"YES"<<endl;
    else
     cout<<"NO"<<endl;

t--;}
    return 0;
}
