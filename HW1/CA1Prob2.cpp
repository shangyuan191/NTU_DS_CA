#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
bool isPrime(int p)
{
    if(p<=1)
    {
        return false;
    }
    if(p==2 || p==3)
    {
        return true;
    }

    if(p%2==0 || p%3==0)
    {
        return false;
    }
    for (int i = 5; i * i <= p; i += 6) 
    {
        if (p % i == 0 || p % (i + 2) == 0) 
        return false;
    }

    return true;
}
int* showPrime(int p)
{
    int* ans;
    ans=(int*)malloc(sizeof(int)*2);
    if (isPrime(p))
    {
        ans[0]=p;
        ans[1]=0;
    }else
    {
        for(int i=p-1;i>0;i--)
        {
            if(isPrime(i))
            {
                ans[0]=i;
                break;
            }
        }
        for(int i=p+1;i<2*p;i++)
        {
            if(isPrime(i))
            {
                ans[1]=i;
                break;
            }
        }
    }
    
    return ans;
}