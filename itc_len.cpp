#include "str_easy.h"

long long itc_len(string a)
{
    long long k=0;
    long long i=0;
    while(a[i]!='\0')
    {
        k=k+1;
        i=i+1;
    }
    return k;
}
