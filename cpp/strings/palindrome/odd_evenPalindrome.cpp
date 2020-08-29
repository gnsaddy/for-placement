#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}

string oddPalindrome(string str)
{
    string odd = "";
    for (int i = 1; i < str.length(); i += 2)
    {
        odd += str[i];
    }

    return odd;
}

string evenPalindrome(string str)
{
    string even = "";
    for (int i = 0; i < str.length(); i += 2)
    {
        even += str[i];
    }

    return even;
}

void checkOddEvenPalindrome(string str)
{
    string even = evenPalindrome(str);
    string odd = oddPalindrome(str);

    if (checkPalindrome(even) && checkPalindrome(odd))
    {
        cout << "String is odd even palindrome" << endl;
    }
    else
    {
        cout << "String is not odd even palindrome" << endl;
    }
}

int main()
{
    string str;
    getline(cin, str);
    // daccad
    // abzzab

    checkOddEvenPalindrome(str);
    return 0;
}