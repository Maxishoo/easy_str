#include "str_easy.h"


string itc_slice_str(string str,int start, int endd)
{
    long long l;
    l=itc_len(str);
    string n="";
    if(start>end)
    {
        return str;
    }
    if(endd>l)
    {
        endd=l;
    }
    if(start>l)
    {
        return str;
    }
    for(int i=start+1;i<endd+1;i++)
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
