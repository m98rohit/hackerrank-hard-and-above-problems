#include <iostream>

using namespace std;

char a[30][100]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};
int main()
{
   int h,m;
   cin>>h>>m;
   if(m==15||m==30||m==45||m==0)
   {if(m==0)
   cout<<a[h]<<" o' clock";
if(m==15)
    cout<<"quarter past"<<" "<<a[h];
    if(m==30)
    cout<<"half past"<<" "<<a[h];
   if(m==45)
    cout<<"quarter to"<<" "<<a[h+1];
   }
else
{if(m<30)
{
   if(m==1)
    cout<<a[m]<<" minute past "<<a[h];
    else
    cout<<a[m]<<" minutes past "<<a[h];
}

if(m>30)
{
 cout<<a[60-m]<<" minutes to "<<a[h+1];
}}
    return 0;
}
