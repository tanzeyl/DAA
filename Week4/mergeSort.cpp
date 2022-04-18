#include <iostream>
using namespace std;

void quickSort(int [], int, int);
int comp = 0, swaps = 0;

int main()
{
    int i, t, n; cin >> t;
    while (t--)
    {
        cin >> n; int a[n];
        for (i=0; i<n; i++) cin >> a[i];
        quickSort(a, 0, n);
        for (i=0; i<n; i++) cout << a[i] << " ";
        cout << endl << "Comparisons: " << comp << endl;
        cout << "Swaps: " << swaps << endl;
    }
}

void quickSort(int a[], int lb, int ub)
{
    int i = lb, j = ub, t, key = a[lb];
    if (lb>=ub) return;
    while (i<j)
    {
        comp++;
        while (key >= a[i] && i<j) { i++; }
        while (key < a[j]) { j--; }
        if (i<j)
        {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        }
    }
    a[lb] = a[j];
    a[j] = key;
    swaps++;
    quickSort(a, lb, j-1);
    quickSort(a, j+1, ub);
}
