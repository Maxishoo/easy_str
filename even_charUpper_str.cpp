#include "str_easy.h"


string itc_even_place(string str) { // 6
    string otv = "";
    if (itc_len(str) == 0 || itc_len(str) == 1)
        return "-1";
    for (int n1 = 0; n1 < itc_len(str); n1++) {
        if ((n1 + 1) % 2 == 0)
            otv += str[n1];
    }
    return otv;
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
