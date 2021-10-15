#include "str_easy.h"

string itc_cmp_str(string str1,string str2, int num)
{
    string neww;
    for(long long  i=0;i<num;i++)
    {
        neww+=str1[i];
    }
    long long lstr2=itc_len(str2);
    for(long long  i=num;i<lstr2;i++)
    {
        neww+=str2[i];
    }
    return neww;
}
int itc_find_str(string str1,string str2)
{
    long long lstr1=str1.size();//itc_len(str1);
    long long lstr2=str2.size();//itc_len(str2);
    long long k=0;
    for(long long i=0;i<lstr1;i++)
    {
        if(k==lstr2)
        {
            return lstr1-k;
        }else if(str1[i]==str2[k])
        {
            k=k+1;
        }
        else
        {
            k=0;
        }
    }
    return -1;
}

string itc_three_str(string str1, string str2, string str3)
