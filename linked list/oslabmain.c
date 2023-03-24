#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// usig namespace __gnu_pbds;
using namespace std;
#define ll       long long int
#define ld              long double
#define pb              push_back
#define P               pair<int,int>
#define F               first
#define S               second
#define inf             3e18
#define vi              vector<int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define MAXN            4e5+2
void worstFit(int blockSize[], int m, int processSize[],
                                                 int n)
{
    // Stores block id of the block allocated to a
    // process
    int allocation[n];
 
    // Initially no block is assigned to any process
    memset(allocation, -1, sizeof(allocation));
 
    // pick each process and find suitable blocks
    // according to its size ad assign to it
    for (int i=0; i<n; i++)
    {
        // Find the best fit block for current process
        int wstIdx = -1;
        for (int j=0; j<m; j++)
        {
            if (blockSize[j] >= processSize[i])
            {
                if (wstIdx == -1)
                    wstIdx = j;
                else if (blockSize[wstIdx] < blockSize[j])
                    wstIdx = j;
            }
        }
 
        // If we could find a block for current process
        if (wstIdx != -1)
        {
            // allocate block j to p[i] process
            allocation[i] = wstIdx;
 
            // Reduce available memory in this block.
            blockSize[wstIdx] -= processSize[i];
        }
    }
 
    cout << "\nProcess No.\tProcess Size\tBlock no.\n";
    for (int i = 0; i < n; i++)
    {
        cout << "   " << i+1 << "\t\t" << processSize[i] << "\t\t";
        if (allocation[i] != -1)
            cout << allocation[i] + 1;
        else
            cout << "Not Allocated";
        cout << endl;
    }
}
void bestFit(int blockSize[], int m, int processSize[], int n)
{
    // Stores block id of the block allocated to a
    // process
    int allocation[n];

    // Initially no block is assigned to any process
    memset(allocation, -1, sizeof(allocation));

    // pick each process and find suitable blocks
    // according to its size ad assign to it
    for (int i=0; i<n; i++)
    {
        // Find the best fit block for current process
        int bestIdx = -1;
        for (int j=0; j<m; j++)
        {
            if (blockSize[j] >= processSize[i])
            {
                if (bestIdx == -1)
                    bestIdx = j;
                else if (blockSize[bestIdx] > blockSize[j])
                    bestIdx = j;
            }
        }

        // If we could find a block for current process
        if (bestIdx != -1)
        {
            // allocate block j to p[i] process
            allocation[i] = bestIdx;

            // Reduce available memory in this block.
            blockSize[bestIdx] -= processSize[i];
        }
    }

    cout << "\nProcess No.\tProcess Size\tBlock no.\n";
    for (int i = 0; i < n; i++)
    {
        cout << "   " << i+1 << "\t\t" << processSize[i] << "\t\t";
        if (allocation[i] != -1)
            cout << allocation[i] + 1;
        else
            cout << "Not Allocated";
        cout << endl;
    }
}
void firstFit(int blockSize[], int m,
              int processSize[], int n)
{
    // Stores block id of the
    // block allocated to a process
    int allocation[n];
 
    // Initially no block is assigned to any process
    memset(allocation, -1, sizeof(allocation));
 
    // pick each process and find suitable blocks
    // according to its size ad assign to it
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (blockSize[j] >= processSize[i])
            {
                // allocate block j to p[i] process
                allocation[i] = j;
 
                // Reduce available memory in this block.
                blockSize[j] -= processSize[i];
 
                break;
            }
        }
    }
 
    cout << "\nProcess No.\tProcess Size\tBlock no.\n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << i+1 << "\t\t"
             << processSize[i] << "\t\t";
        if (allocation[i] != -1)
            cout << allocation[i] + 1;
        else
            cout << "Not Allocated";
        cout << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE

  freopen("input.txt", "r", stdin);

  freopen("output.txt", "w", stdout);

#endif 
  int m,n;
  cin>>m>>n;
  int processSize[n];
  int blockSize[m];
  
for(int i=0;i<m;i++)
    cin>>blockSize[i];
for(int i=0;i<n;i++)
    cin>>processSize[i];
bestFit(blockSize,m,processSize,n);
worstFit(blockSize,m,processSize,n);
firstFit(blockSize,m,processSize,n);
return 0;
 
}