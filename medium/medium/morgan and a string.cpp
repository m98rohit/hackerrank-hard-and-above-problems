#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int a1[200000],b1[200000];
int main()
{ char a[200000],b[200000];
    int t;
cin>>t;
while(t)
{ long long l1,l2,index1=0,index2=0;
scanf("%s",a);
l1=strlen(a);
scanf("%s",b);
l2=strlen(b);
a[l1]='}';
b[l2]='}';
while(index1<l1&&index2<l2)
{ if(a[index1]<b[index2])
        {cout<<a[index1++];}
 else if(a[index1]>b[index2])
        {cout<<b[index2++];}
else
 { if(strcmp(a+index1,b+index2)==0)
     cout<<a[index1++];
   else if(strcmp(a+index1,b+index2)<0)
     cout<<a[index1++];
   else
    cout<<b[index2++];
}

}
while(index1<l1)
    cout<<a[index1++];
while(index2<l2)
    cout<<b[index2++];

cout<<endl;
t--;}
return 0;}
