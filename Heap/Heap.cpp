#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Heap
{
    int arr[100];
    int size;

public:
    Heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int);
    void deleteFromHeap();
    void print();
};
// T.C : O(logn)
void Heap::insert(int data)
{
    size++;
    int ind = size;
    arr[ind] = data;
    while (ind > 1)
    {
        int parent = ind / 2;
        if (arr[parent] < arr[ind])
        {
            swap(arr[parent], arr[ind]);
            ind = parent;
        }
        else
            break;
    }
    cout << "After inserting " << data << endl;
    print();
}
// T.C : O(logn)
void Heap::deleteFromHeap()
{
    if (size == 0)
        return;

    arr[1] = arr[size];
    size--;
    int ind = 1;

    while (ind <= size)
    {
        int leftInd = 2 * ind;
        int rightInd = 2 * ind + 1;

        int maxInd = -1;
        if (leftInd <= size)
            maxInd = leftInd;
        if (rightInd <= size && arr[leftInd] < arr[rightInd])
            maxInd = rightInd;
        if (maxInd != -1 && arr[ind] < arr[maxInd])
        {
            swap(arr[ind], arr[maxInd]);
            ind = maxInd;
        }
        else
            break;
    }
    cout << "After deleting " << endl;
    print();
}
void Heap::print()
{
    for (int i = 1; i <= size; i++)
        cout << arr[i] << " ";
    cout << endl
         << endl;
}
int main()
{
    Heap h1;
    h1.insert(32);
    h1.insert(33);
    h1.insert(56);
    h1.insert(20);
    h1.insert(1);
    h1.insert(100);
    h1.deleteFromHeap();
    h1.deleteFromHeap();
    h1.deleteFromHeap();
    h1.deleteFromHeap();
    h1.deleteFromHeap();
    return 0;
}