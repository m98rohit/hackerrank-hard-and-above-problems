#include <iostream>
#include <algorithm>
using namespace std;
#define NULL 0
long long actual[500000],sorted[500000],c[500000],swaps,rev[500000],revo,revsorted[500000];
long long mod(long long a,long long b);
void hashe(long long s,long long index);
long long indexfinder(long long s);
struct liste
{ long long key,num;
  struct liste *next;
};

liste *hashmap[500000];
int main()
{
    long siz;
    cin>>siz;
    for(int i=0;i<siz;i++)
        {cin>>actual[i];
         sorted[i]=actual[i];
        }
    sort(sorted,sorted+siz);

for(int i=0;i<siz;i++)
hashe(sorted[i],i);

for(int i=0;i<siz;i++)
    {c[i]=indexfinder(actual[i]);
    }
for(int i=0;i<siz;i++)
{rev[i]=mod(c[i],siz-1);
}

for(long long int i=0;i<siz;i++)
 {
  if(c[i]==i)
    swaps=swaps;
 else
  { swaps+=1;
    long t1=c[i];
    swap(c[i],c[c[i]]);
   i=min(i,c[i]);
  }

 }

for(long long int i=0;i<siz;i++)
 {
  if(rev[i]==i)
    revo=revo;
 else
  { revo+=1;
    long t1=rev[i];
    swap(rev[i],rev[rev[i]]);
    i=min(i,rev[i]);
  }
 }
//for(int i=0;i<siz;i++)
  //  cout<<rev[i]<<" ";
//cout<<endl<<swaps;
cout<<min(swaps,revo);
return 0;
}
void hashe(long long s,long long index)
{
    long value=s%500000;
 liste *p,*root;
 root=hashmap[value];
p=new(liste);
p->next=NULL;
p->key=index;
p->num=s;
if(root==NULL)
{ //cout<<"sexer";
    hashmap[value]=p;}
else
{ while(root->next!=NULL)
     root=root->next;
     root->next=p;}
//cout<<"finish";
}

long long indexfinder(long long s)
{
long value=s%500000;
liste *root=hashmap[value];
while(root->num!=s)
    root=root->next;
//cout<<root->key;
return root->key;
}
long long mod(long long a,long long b)
{if(a-b>0)
 return a-b;
 return b-a;

}
