#include <iostream>
using namespace std;

int binarySearch(int [], int, int &, int);

int main()
{
    int i, t, mid, low = 0, high, ctr = 0, n, key, res;
    cin >> t;
    while (t--)
    {
        cin >> n;
        high = n-1; int a[n];
        for(i=0; i<n; i++) cin >> a[i];
        cin >> key;
        res = binarySearch(a, n, ctr, key);
        if (res == -1) cout << "Not present " << ctr << endl;
        else cout << "Present " << ctr << endl;
    }
}

int binarySearch(int nums[], int n, int &ctr, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if (target == nums[mid]) { ctr++; return mid; }
        else if (target < nums[mid]) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}
