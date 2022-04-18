#include <iostream>
#include <algorithm>
using namespace std;

bool checkDuplicate(int [], int);

int main()
{
    int i, t, n; cin >> t;
    while (t--)
    {
        cin >> n; int a[n];
        for (i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        if (checkDuplicate(a, n)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}

bool checkDuplicate(int a[], int n)
{
    int i;
    for (i=0; i<n-1; i++)
        { if (a[i] - a[i+1] == 0) {return true;} }
    return false;
}
