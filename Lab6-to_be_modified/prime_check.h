#include"is_not_div.h"

int prime_check(int n)
{
    int flag=0;
    for(int i=2;(i*i)<n;i++)
    {
        if(!is_not_div(n,i))
            flag=1;
    }
    return(flag);
}
