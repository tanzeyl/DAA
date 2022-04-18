#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, i, t, k, ctr = 0; cin >> t;
    while (t--)
    {
        cin >> n; int a[n];
        for (i=0; i<n; i++) cin >> a[i];
        cin >> k;
        sort(a, a+n);
        i = n-1;
        while (ctr != k-1)
        {
            if (a[i] != a[i-1]) ctr++;
            i--;
        }
        cout << a[i] << endl;
        for (i=0; i<n; i++) cout << a[i] << " ";
    }
}
