#include "str_easy.h"


string itc_slice_str(string str,int start, int endd)
{
    long long l;
    l=itc_len(str);
    string n;
    if(endd>l)
    {
        endd=l;
    }
    for(int i=start;i<endd;i++)
    {
        n+=str[i];
    }
    return n;
}
bool itc_equal_reverse(string str)
{
    bool otv=false;
    string rev;
    rev=itc_reverse_str(str);
    if(rev==str)
    {
        otv=true;
    }
    return otv;
}
