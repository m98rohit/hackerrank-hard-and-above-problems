#include <iostream>
#include<algorithm>
using namespace std;
unsigned long long int a[1000001],b[1000001],c[1000001];
long long siz,swa=0,re=-1,ire=0,lre=0,is=0,ls=0;
int main()
{

    cin>>siz;
    for(long long int i=1;i<=siz;i++)
    { cin>>a[i];
       b[i]=a[i];}
       sort(b+1,b+siz+1);
       for( long long int j=1;j<=siz;j++)
       {c[b[j]]=j;}
       for( long long int j=1;j<=siz;j++)
       {a[j]=c[a[j]];}

  for(long long int i=1;i<=siz;i++)
  {if(i==a[i])
     {
         if(re>0)
      {   if(re!=a[i]+1)
          {lre=i-1;
         re=-200;}
         else if(re==a[i]+1&&i!=siz)
           re=a[i];
         else
          {lre=i;
         re=-200;}
      }


     }
  else
    {
        if(a[a[i]]==i&&a[i]>i)
        {
            if(swa==0)
         {  is=i;
            ls=a[i];
             swa=1;
        }
            else
                swa=-1;
      }
     if(re==-1)
      {    ire=i;
          re=a[i];}
     else if(re>0)
      { if(re==a[i]+1)
          {re=a[i];
           if(i==siz)
           {re=-200;
           lre=i;
            break;}
          }
          else
            re=-100;
      }
    if(re==-200)
        re=-100;
    }
//cout<<swa<<" "<<is<<" "<<ls<<" "<<re<<" "<<ire<<" "<<lre<<endl;
  }

  if(swa==0&&re==0)
    cout<<"yes";
  else if(swa==1)
    cout<<"yes"<<endl<<"swap "<<is<<" "<<ls;
  else if(re==-200)
    cout<<"yes"<<endl<<"reverse "<<ire<<" "<<lre;
  else
    cout<<"no";
    return 0;
}
