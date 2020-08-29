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
int main()
{
    string str;
    cin >> str;

    //addwfefwkll => no
    // osafdfgsg  => yes

    string odd = oddPalindrome(str);
    if (checkPalindrome(odd))
    {
        cout << "yes it is odd palindrome" << endl;
    }
    else
    {
        cout << "Not oddly palindrome";
    }
}