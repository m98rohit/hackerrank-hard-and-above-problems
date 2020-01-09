#include <iostream>
#include<stdio.h>
using namespace std;
unsigned long long suma(unsigned long long a);
int main()
{unsigned long long num=0,q=1;
char temp;
 unsigned long long sum;
    while(1)
    { scanf("%c",&temp);
      if(temp==' ')
        break;

        num+=temp-'0';
    }
    cin>>q;

   num=num*q;


   while(num/10!=0)
   {
       num=suma(num);
   }
   cout<<num;
    return 0;
}
unsigned long long suma(unsigned long long a)
{ unsigned long long m=0;
    while(a!=0)
    {m+=a%10;

     a=a/10;
    }

return m;}
