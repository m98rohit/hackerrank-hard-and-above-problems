#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int column[10];
int main()
{ char a[100];
char b[100],c[100][100];

gets(a);

int len=0;
    for(int i=0;a[i]!='\0';i++)
    {
       if(a[i]!=' ')
           b[len++]=a[i];

    }
    a[len]='\0';
    //cout<<b<<len;
    double p;
    p=sqrt(len);
    long w=(long long)p;
    if(w*w==len)
    { int count=0;
     for(int i=0;i<w&&count!=len;i++)
        for(int j=0;j<w&&count!=len;j++)
         {
             c[i][j]=b[count++];
         }
    for(int i=0;i<w;i++)
     {for(int j=0;j<w;j++)
       cout<<c[j][i];

     cout<<" ";}
    }
    else
    { int r,col;
    if(w*w+1>=len)
    {
        r=w;
        col=w+1;
    }
    else
    { r=w+1;
      col=w+1;
    }


     //cout<<r<<" "<<col<<" ";
    int count=0;
     for(int i=0;i<r;i++)
        for(int j=0;j<col&&count!=len;j++)
         {
             c[i][j]=b[count++];
             column[j]++;
         }
      //for(int )
    for(int i=0;i<col;i++)
     {for(int j=0;j<column[i];j++)
       {

           cout<<c[j][i];

       }
       cout<<" ";
     }


    }
    return 0;
}
