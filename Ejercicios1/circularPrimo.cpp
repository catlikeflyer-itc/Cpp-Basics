#include<iostream>
#include<cmath>
using namespace std;

int fl;

int primo(int n)
{
    int i;
    i=n-1;

    while(i>=2)
    {
        if(n%i==0)
        {
            fl=1;
        }
        
        i--;
    }
}
 
int vueltas(int a)
{
    int b,c,d,e,i,j,k,s,z,v,x[8],y[8],m;
    b=a;
    i=0;
 
    while(b>0)
    {
        y[i]=b%10;
        b=b/10;
        i++;
    }
    
    c=0;
 
    for(j=i-1;j>=0;j--)
    {
        x[c]=y[j];
        c++;
    }
    
    m=i;
    
    while(m>0)
    {
        c=m-1;
        d=i-1;
        e=0;
        s=0;

        while(e<i)
        {
            z=pow(10,d);
            v=z*x[c%i];
            c++;
            d--;
            e++;
            s=s+v;
        }
    
    m--; 
    primo(s);
    }
}
 
int main()
{
int i=2;

while(i<=10000)
{
    fl=0;
    vueltas(i);
    
    if(fl==0)
    {
        cout<<i<<endl;
    }
    
    i++;
} 
return 0;
}
