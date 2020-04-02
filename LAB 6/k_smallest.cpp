#include<iostream>
#include <unistd.h>

using namespace std;

void partition(int a[],int s,int k)
{
    int sw,pv=s-1;
    sw=0;

    if(s==0)
        return;

    for(int i=0;i<s;i++)
    {
        if(a[i]<a[pv])
        {
            int tmp;
            tmp=a[i];
            a[i]=a[sw];
            a[sw]=tmp;
            sw++;
        }    
    }
    int tmp=a[sw];
    a[sw]=a[pv];
    a[pv]=tmp;
    if(k<=sw)
        partition(a,sw,k);
    else
    partition(&a[sw+1],s-sw-1,k-sw-1);
}

int main()
{
    int size,k;
    cout<<"enter size";
    cin>>size;

    cout<<"enter k for k smallest";
    cin>>k;

    int a[size];

    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    partition(a,size,k);

    for(int i=0;i<k;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<'\n';

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<' ';
    }

}