
/*special divisibility funclion, returns false if divisible */
int is_not_div(int n,int div)
{
    while(n>=div)
    {
        n-=div;
    }
   return(n);
    
}