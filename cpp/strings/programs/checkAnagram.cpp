/*
Write a function to check whether two given strings are anagram of each other or not. 
An anagram of a string is another string that contains same characters, only the order of 
characters can be different. For example, “abcd” and “dabc”  are anagram of each other.

*/
#include <bits/stdc++.h>
using namespace std;

bool m1(string s1, string s2)
{
    int count[256] = {0};
    if (s1.length() != s2.length())
    {
        return false;
    }

    for (int i = 0; i < s1.length() && i < s2.length(); i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for (int i = 0; i < 256; i++)
        if (count[i])
            return false;
    return true;
}

bool m2(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 != s2)
    {
        return false;
    }

    return true;
}

bool m3(string s1, string s2)
{
    int count1[256], count2[256];
    fill_n(count1, 256, 0);
    fill_n(count2, 256, 0);

    if (s1.length() != s2.length())
    {
        return false;
    }

    for (int i = 0; i < s1.length() && i < s2.length(); i++)
    {
        count1[s1[i]]++;
        count2[s2[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count1[i] != count2[i])
        {
            return false;
        }
    }

    return true;
}
int main()
{
    string str1 = "listen";
    string str2 = "silent";

    bool b1 = m1(str1, str2);
    if (b1 == true)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    bool b2 = m2(str1, str2);
    if (b2 == true)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    bool b3 = m2(str1, str2);
    if (b3 == true)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}