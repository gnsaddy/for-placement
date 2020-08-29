#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, query, colValue;
    cin >> n >> query;
    vector<vector<int>> vRowCol;

    for (int i = 0; i < n; i++)
    {
        int varLength;
        cin >> varLength;
        vector<int> vCol;
        for (int j = 0; j < varLength; j++)
        {
            cin >> colValue;

            vCol.push_back(colValue);
        }
        vRowCol.push_back(vCol);
    }

    // Displaying the 2D vector
    cout << "vector value:" << endl;
    for (int i = 0; i < vRowCol.size(); i++)
    {
        for (int j = 0; j < vRowCol[i].size(); j++)
            cout << vRowCol[i][j] << " ";
        cout << endl;
    }

    // printing specified position
    int takeRow, valInRow;
    cout << "Result:" << endl;
    for (int i = 0; i < query; i++)
    {
        cin >> takeRow >> valInRow;
        cout << vRowCol[takeRow][valInRow] << endl;
    }

    return 0;
}