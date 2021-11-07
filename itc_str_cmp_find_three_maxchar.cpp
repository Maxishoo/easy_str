#include "str_easy.h"

string itc_cmp_str_(string str1,string str2, int num)
{
    string neww="";
    long long lstr2=itc_len(str2);
    long long lstr1=itc_len(str1);
    if (lstr1 < num || num < 0) return str1;
    if(str2=="")
    {
        return(str1);
    }
    for(long long  i=0;i<lstr1;i++)
    {
        if (i<num || i > (num+lstr2-1)) {
            neww+=str1[i];
        }else {
            neww+=str2[i-num];
        }
    }
    return neww;
}

string itc_cmp_str(string str1,string str2, int num)
{
    string neww="";
    long long lstr2=itc_len(str2);
    long long lstr1=itc_len(str1);
    if (lstr1 < num || num < 0) return str1;
    if(str2=="")
    {
        return(str1);
    }
    for(long long  i=0;i<lstr1;i++)
    {
        if (i<num ) {
            neww+=str1[i];
        }else if (i > (num+lstr2-1)) {
            neww+=str1[i-lstr2];
        }
        else {
            neww+=str2[i-num];
        }
    }
    return neww;
}

int itc_find_str(string str1,string str2)
{
    long long lstr1=itc_len(str1);
    long long lstr2=itc_len(str2);
    int k=0;
    for(long long i=0;i<lstr1;i++)
    {

        if(str1[i]==str2[k])
        {
            k=k+1;
            if(k==lstr2)
            {
            return i-k+1;
            }
        }
        else
        {
            k=0;
        }
    }
    return -1;
}

string itc_three_str(string str1, string str2, string str3)
{
    long long pos;
    pos=itc_find_str(str1,str2);
    long long l2 = itc_len(str2);
    string otv="";
    while(pos != -1)
    {
        otv+=itc_slice_str(str1,0,pos-1);
        otv+=str3;
        str1=itc_slice_str(str1,pos+l2,itc_len(str1));
        pos=itc_find_str(str1,str2);
    }
    otv+=str1;
    return otv;
}

int itc_max_char_on_end(string str)
{
    int m;
    int k=0;
    int otv=0;
    int sledchifra=0;
    long long l = itc_len(str);
    for(long long i=0;i<l;i++)
    {
        m=itc_str_to_int(str[i]);

        if(m == (-1) )
        {
            otv=itc_max(otv,k);
            k=0;
        }else if(k==0)
        {
            k=1;
            sledchifra=m+1;
        }else if(sledchifra==m)
        {
            k=k+1;
            sledchifra=m+1;
        }else
        {
            otv=itc_max(otv,k);
            k=1;
            sledchifra=m+1;
        }

    }
    if(k!=0)
    {
        otv=itc_max(otv,k);
    }
    if(otv==0)
    {
        return -1;
    }
    return otv;
}
