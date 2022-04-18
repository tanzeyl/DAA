#include <iostream>
using namespace std;

void countSort(int [], char [], int);

int main()
{
    int n, t, i, count[26] = {0}; cin >> t;
    while (t--)
    {
        cin >> n; char a[n];
        for (i=0; i<n; i++) cin >> a[i];
        countSort(count, a, n);
    }
}

void countSort(int count[], char a[], int n)
{
    int i, max = 0;
    char b[n];
    for (i=0; i<n; i++) count[a[i]-97]++;
    for (i=0; i<26; i++) if (count[i] > max) max = count[i];
    i = 0;
    cout << a[i] << " - " << max;
}
