#include <iostream>
using namespace std;

int *nums;
int size;

void A(int *&arr)
{
    int *resize;
    resize = new int[size * 2];

    for (int i = 0; i < size; i++)
        resize[i] = arr[i];

    cout << endl;
    delete[] arr;
    arr = resize;
    size *= 2;
}

int main()
{
    size = 14;
    nums = new int[size];
    for (int i = 0; i < size; i++)
        nums[i] = int(i);

    for (int i = 0; i < size; i++)
        cout << nums[i] << endl;

    A(nums);

    cout << endl;
    for (int i = (size / 2); i < size; i++)
        nums[i] = i;

    for (int i = 0; i < size; i++)
        cout << nums[i] << endl;

    delete[] nums;
}