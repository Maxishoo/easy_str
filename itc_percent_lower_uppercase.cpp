#include "str_easy.h"

double itc_percent_lower_uppercase(string a)
{
    long long kpr=0;
    long long kstr=0;
    double otv;
    long long l;
    l=itc_len(a);
    for(long long  i=0;i<l;i++)
    {
        if(is_char_upper(a[i]))
        {
            kstr++;
        }else
        {
            kpr++;
        }
    }
    if(kpr==0 || kstr==0)
    {
        return -1;
    }
    otv=double(kpr)/double(kstr);
    return otv;
}
