#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "aabcbaaa";
    int low = 0;
    int high = str.length() - 1;

    while (high > low)
    {
        if (str[low++] != str[high--])
        {
            cout << "Not a palindrome : " << str << endl;
            return 0;
        }
    }

    cout << "String is palindrome : " << str << endl;
}