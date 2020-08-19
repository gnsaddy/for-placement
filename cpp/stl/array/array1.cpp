#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 5> arr = {7, 2, 5, 1, 9};
    // uniform initialization
    array<int, 9> arr2{1, 2, 3, 4, 7, 2, 5, 1, 9};
    // assign using initializer list
    array<int, 6> arr3;
    arr3 = {9, 8, 7, 6, 5, 4};

    for (auto i : arr3)
    {
        cout << i << endl;
    }

    cout << arr2.at(3) << "or" << arr2[3] << endl;

    cout << "first : " << arr2.front() << ", last : " << arr2.back() << endl;

    array<int, 10> arr4;
    arr4.fill(10);

    for (auto i : arr4)
        cout << i << endl;

    // iterator
    array<int, 9>::iterator it;
    for (it = arr2.begin(); it != arr2.end(); it++)
    {
        cout << *it << endl;
    }
}