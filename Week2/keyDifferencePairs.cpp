#include <iostream>
using namespace std;

int main()
{
    int i, t, ctr = 0, n, key, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for(i=0; i<n; i++) cin >> a[i];
        cin >> key;
        for (i=0; i<n; i++)
        {
            for (j=i+1; j<n; j++)
            { if (abs(a[i] - a[j]) == key) ctr++; }
        }
        cout << ctr << endl;
        ctr = 0;
    }
}
