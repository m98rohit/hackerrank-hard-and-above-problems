#include <iostream>
#include<algorithm>
#include<string.h>
using namespace std;
//char a[27]={'0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','0','p','q','r','s','t','u','v','w','x','y','z'};

int main()
{ int t;
 cin>>t;
 while(t)
{
char b[101],c[101];
 cin>>b;
 int len=0,key=0,in;
 for(int i=0;b[i]!='\0';i++,len++);
for(int i=0;i<len;i++)
    c[i]=b[i];
c[len]='\0';
 for(int i=len-1;i>=0&&key==0;i--)
 {
 int maxi=999;
   for(int j=i+1;j<len;j++)
           {
               if(b[i]<b[j])
               {
                 if(b[j]-b[i]<maxi)
                 { maxi=b[j]-b[i];
                     in=j;
                 }
               }
           }
if(maxi!=999)
{ swap(b[i],b[in]);
    sort(b+i+1,b+len);
    key=1;}
 }

 if(strcmp(b,c)==0)
    cout<<"no answer"<<endl;
 else
 cout<<b<<endl;
 t--;}
    return 0;
}
