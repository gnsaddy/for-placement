#include <iostream>
#include <vector>
using namespace std;

vector<int> nums;

int main()
{
    nums.resize(10);
    for (int i = 0; i < nums.size(); i++)
        nums[i] = i;

    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << endl;

    nums.resize(nums.size() * 2);

    cout << endl
         << endl;

    for (int i = (nums.size() / 2); i < nums.size(); i++)
        nums[i] = i;

    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << endl;
}