#include <iostream>
using namespace std;

void insertionSort(int [], int);
int ctr = 0;

int main()
{
    int i, t, j = 0, k = 0, n; cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], b[n], c[n];
        for (i=0; i<n; i++) cin >> a[i];
        for (i=0; i<n/2; i++) b[i] = a[i];
        for (i=n/2; i<n; i++) c[i-n/2] = a[i];
        if (n%2 == 0) { insertionSort(b, n/2); insertionSort(c, n/2); }
        else { insertionSort(b, n/2); insertionSort(c, n/2+1); }
        i = 0;
        while (i < n/2 && j < n/2)
        {
            if (b[i] < c[j]) { a[k++] = b[i++]; ctr++; }
            else a[k++] = c[j++];
        }
        for(i=0; i<n; i++)
            cout << a[i] << " ";
        cout << endl << "Comparisons: " << ctr << endl;
    }
}

void insertionSort(int a[], int n)
{
    int i, j, t;
    for (i=0; i<n; i++)
    {
        t = a[i]; j = i-1;
        while (j >= 0 && t < a[j])
        {
            a[j+1] = a[j];
            ctr++; j--;
        }
        a[j+1] = t;
    }
}
