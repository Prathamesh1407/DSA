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
void heapify(int arr[], int n, int i)
{
    int largest=i;
    int leftInd=2*i,rightInd=2*i+1;

    if(leftInd<=n && arr[leftInd]>arr[largest]) largest=leftInd;
    if(rightInd<=n && arr[rightInd]>arr[largest]) largest=rightInd;

    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void heapSort(int arr[],int n)
{
    int size=n;
    while (size>1)
    {
        swap(arr[size],arr[1]);
        size--;
        heapify(arr,size,1);
    }
    
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
    // h1.deleteFromHeap();
    // h1.deleteFromHeap();
    // h1.deleteFromHeap();
    // h1.deleteFromHeap();
    // h1.deleteFromHeap();
    int arr[7] = {-1, 4, 5, 1, 8, 7,2};
    int n = 6;
    for (int i = n/2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    heapSort(arr,n);
    for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
    return 0;
}