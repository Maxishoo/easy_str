#include "str_easy.h"

int itc_count_char_in_str(char ch, string str)
{
    int k=0;
    long long l;
    l=itc_len(str);
    for(long long i=0;i<l;i++)
    {
        if(str[i]==ch)
        {
            k++;
        }
    }
    return k;
}
