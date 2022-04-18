#include <iostream>
using namespace std;

void insertionSort(int [], int);

int main()
{
    int t, n, i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for (i=0; i<n; i++) cin >> a[i];
        insertionSort(a, n);
    }
}

void insertionSort(int a[], int n)
{
    int i, j, t, ctr1 = 0, ctr2 = 0;
    for (i=0; i<n; i++)
    {
        t = a[i]; j = i-1;
        while (j >= 0 && t < a[j])
        {
            a[j+1] = a[j];
            ctr1++; j--; ctr2++;
        }
        a[j+1] = t; ctr2++;
    }
    ctr2--;
    for (i=0; i<n; i++) cout << a[i] << " ";
    cout << endl << "Comparisons: " << ctr1 << endl;
    cout << "Shifts: " << ctr2 << endl;
}
