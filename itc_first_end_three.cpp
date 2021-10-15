#include "str_easy.h"

void itc_first_end_three(string a)
{
    long long k;
    k=itc_len(a);
    if(k>5)
    {
        for(long long i=0;i<3;i++)
        {
            cout<<a[i]<<" ";
        }
        for(long long i=0;i<3+1;i++)
        {
            cout<<a[k-i]<<" ";
        }

    }else
    {
        for(long long i=0;i<k;i++)
        {
            cout<<a[0]<<" ";
        }
    }
}
