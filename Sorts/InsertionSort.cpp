#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5] = {5, 4, 3, 2, 1};
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int insertEle = a[i];

        while (j > -1 && a[j] > insertEle)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = insertEle;
    }
    for (auto val : a)
        cout << val << " ";
    return 0;
}