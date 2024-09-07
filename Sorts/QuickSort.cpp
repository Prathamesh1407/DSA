#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int getPartition(int *a, int low, int high)
{
    int i = low, j = high;
    int pivot = a[low];
    while (i < j)
    {
        while (i < high && a[i] <= pivot)
            i++;

        while (j > low && a[j] >= pivot)
            j--;

        if (i < j)
            swap(a[i], a[j]);
        else
            break;
    }
    swap(a[low], a[j]);
    return j;
}
void QuickSort(int *a, int low, int high)
{
    if (low >= high)
        return;

    int partition = getPartition(a, low, high);
    QuickSort(a, low, partition - 1);
    QuickSort(a, partition + 1, high);
}
int main()
{
    int a[] = {66, 55, 44, 33, 22, 11};
    int n = sizeof(a) / sizeof(int), c = 0;
    QuickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}