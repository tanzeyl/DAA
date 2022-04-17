#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, key, ctr = 1, i = 0, j, flag = 0, t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for (i=0; i<n; i++)
            cin >> a[i];
        i = 0;
        cin >> key;
        if (a[0] == key) cout << "Present " << ctr << endl;
        else
        {
            while (1)
            {
                if (a[(int)pow(2, i)] > key)
                {
                    for (j=pow(2, i); j<min((int)pow(2, i+1), n); j++)
                    { ctr++; if (a[j] == key) flag = 1; }
                    if (flag) cout << "Present " << ctr << endl;
                    else cout << "Not present " << ctr << endl;
                    break;
                }
                ctr++; i++;
            }
        }
    }
}
