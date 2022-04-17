#include <iostream>
#include <vector>
using namespace std;

vector <int> threeIndexes(int [], int);

int main()
{
    int t, n, i;
    vector <int> v;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for (i=0; i<n; i++) cin >> a[i];
        v = threeIndexes(a, n);
        for (auto i=v.begin(); i!=v.end(); i++)
            cout << *i << " ";
    }
}

vector <int> threeIndexes(int a[], int n)
{
    int i, j, k, temp;
    vector <int> v;
    for(i=0; i<n; i++)
        {
            for (j=i+1; j<n; j++)
            {
                temp = a[i] + a[j];
                for(k=0; k<n; k++)
                {
                    if (a[k] == temp)
                    {
                        v.push_back(i); v.push_back(j); v.push_back(k);
                        return v;
                    }
                }
            }
        }
        return { 0 };
}
