#include <iostream>
using namespace std;
struct MinHeap
{
    int *arr;
    int cap;
    int sz;
    MinHeap(int c)
    {
        arr = new int(cap);
        cap = c;
        sz = 0;
    }
    int left(int i)
    {
        return 2 * i + 1;
    }
    int right(int i)
    {
        return 2 * i + 2;
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }

    void insert(int x)
    {
        if (sz == cap)
            return;
        sz++;
        arr[sz - 1] = x;
        // upheapify
        int i = sz - 1;
        while (i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[parent(i)], arr[i]);
            i = parent(i);
        }
    }

    // recurssive
    void downHeapify(int i)
    {
        int l = left(i);
        int r = right(i);
        int smallest = i;
        if (l < sz && arr[l] < arr[smallest])
        {
            smallest = l;
        }
        if (r < sz && arr[r] < arr[smallest])
        {
            smallest = r;
        }
        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);
            downHeapify(smallest);
        }
    }

    // iterative
    void downHeapifyIter(int i)
    {
        bool flag = true;
        while (true)
        {
            int l = left(i);
            int r = right(i);
            int smallest = i;
            if (l < sz && arr[l] < arr[smallest])
            {
                smallest = l;
            }
            if (r < sz && arr[r] < arr[smallest])
            {
                smallest = r;
            }
            if (smallest != i)
            {
                swap(arr[i], arr[smallest]);
                i = smallest;
            }
            else
            {
                flag = false;
            }
        }
    }

    int ExtractMin()
    {
        if (sz == 0)
            return -1;
        if (sz == 1)
        {
            sz--;
            return arr[0];
        }
        sz--;
        swap(arr[sz], arr[0]);
        downHeapify(0);
        return arr[sz];
    }

    void print()
    {
        int i = 0;
        int levelNum = 1;
        while (i < sz)
        {
            int j = 0;
            while (i < sz && j < levelNum)
            {
                cout << arr[i] << " ";
                j++;
                i++;
            }
            cout << "\n";
            levelNum *= 2;
        }
    }
};

int main()
{
    MinHeap myheap(12);

    myheap.insert(10);
    myheap.insert(15);
    myheap.insert(2);
    myheap.insert(50);
    myheap.insert(100);
    myheap.insert(55);
    myheap.insert(20);
    myheap.print();
}
