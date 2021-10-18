#ifndef STR_EASY_H_INCLUDED
#define STR_EASY_H_INCLUDED

#include <iostream>
using namespace std;
#include <string>


string itc_hello_str(string a);

long long itc_len(string a);

void itc_print_copy_str(string str, int n);
void itc_first_end_three(string a);

int itc_count_char_in_str(char ch, string str);

string itc_even_place(string str);

bool is_char_upper(char a);

double itc_percent_lower_uppercase(string a);

string itc_reverse_str(string str);

string itc_slice_str(string str,int start, int endd);

bool itc_equal_reverse(string str);

string itc_cmp_str(string str1,string str2, int num);
int itc_find_str(string str1,string str2);
string itc_three_str(string str1, string str2, string str3);
int itc_max_char_on_end(string str);

int itc_str_to_int(char a);
int itc_max(int a,int b);
#endif // STR_EASY_H_INCLUDED
