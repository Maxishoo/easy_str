#include "str_easy.h"

string itc_reverse_str(string str)
{
    long long l=0;
    l=itc_len(str);
    string n;
    n=str;
    for(long long  i=0;i<l;i++)
    {
        n[i]=str[l-i-1];
    }
    return n;
}
