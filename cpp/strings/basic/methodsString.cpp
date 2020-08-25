#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "workinsg on string";
    cout << str1 << endl;

    cout << str1.find("g") << endl;
    cout << str1.find_first_of("eostg") << endl;
    cout << str1.find_last_of("eostg") << endl;
    str1.push_back('o');
    cout << str1 << endl;
    str1.pop_back();
    cout << str1 << endl;
    cout << str1.length() << endl;
}