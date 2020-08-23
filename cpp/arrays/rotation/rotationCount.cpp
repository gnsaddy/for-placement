#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ar = {7, 9, 11, 12, 15};

    auto minmax = minmax_element(ar.begin(), ar.end());
    cout << *minmax.first << "," << *minmax.second << endl;
    int minele = min_element(ar.begin(), ar.end()) - ar.begin();
    cout << "rotation : " << minele << endl;

    std::vector<int> v = {5, 2, 8, 10, 9};
    int maxElementIndex = std::max_element(v.begin(), v.end()) - v.begin();
    int maxElement = *std::max_element(v.begin(), v.end());

    int minElementIndex = std::min_element(v.begin(), v.end()) - v.begin();
    int minElement = *std::min_element(v.begin(), v.end());

    std::cout << "maxElementIndex:" << maxElementIndex << ", maxElement:" << maxElement << '\n';
    std::cout << "minElementIndex:" << minElementIndex << ", minElement:" << minElement << '\n';
}
