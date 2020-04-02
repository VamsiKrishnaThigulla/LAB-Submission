#include<iostream>
#include<math.h>
#include"prime_check.h"

using namespace std;


int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;

    if(prime_check(n))
        cout<<"not prime\n";
    else
        cout<<"prime\n";    
}