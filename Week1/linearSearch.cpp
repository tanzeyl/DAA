#include <iostream>
using namespace std;

int main()
{
    int n, key, ctr = 0, i, t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for (i=0; i<n; i++)
            cin >> a[i];
        cin >> key;
        for (i=0; i<n; i++)
        {
            ctr++;
            if (a[i] == key)  break;
        }
        if (i == n) cout << "Not present" << ctr << endl;
        else cout << "Present " << ctr << endl;
    }
}
