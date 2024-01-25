#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int a[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    int row = 3, cols = 4;
    int startingRow = 0;
    int endingRow = row - 1;
    int startingCols = 0;
    int endingCols = cols - 1;
    int total = row * cols, count = 0;
    vector<int> ans;
    while (count < total)
    {
        // Print Starting row
        for (int i = startingCols; i <= endingCols && count < total; i++)
        {
            ans.push_back(a[startingRow][i]);
            count++;
        }
        startingRow++;

        // Print Ending Col
        for (int i = startingRow; i <= endingRow && count < total; i++)
        {
            ans.push_back(a[i][endingCols]);
            count++;
        }
        endingCols--;

        // Print Ending Row
        for (int i = endingCols; i >= startingCols && count < total; i--)
        {
            ans.push_back(a[endingRow][i]);
            count++;
        }
        endingRow--;

        // Print Starting Col
        for (int i = endingRow; i >= startingRow && count < total; i--)
        {
            ans.push_back(a[i][startingCols]);
            count++;
        }
        startingCols++;
    }
    for (auto val : ans)
        cout << val << " ";

    return 0;
}