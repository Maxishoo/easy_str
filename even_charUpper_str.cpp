#include "str_easy.h"

string itc_even_place(string str)
{
    string n;
    long long l;
    l=itc_len(str);
    for(long long i=0;i<l;i++)
    {
        if(i%2==0)
        {
            n+=str[i];
        }
    }
    return n;
}
bool is_char_upper(char a)
{
    bool t=false;
    if(int(a)>64 && int(a)<91)
    {
        t=true;
    }
    return t;
}
