#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m, n, i, tot, k = 0, j, x;
    cin >> m; int a[m];
    for (i=0; i<m; i++) cin >> a[i];
    cin >> n; int b[n], c[n];
    for (i=0; i<n; i++) cin >> b[i];
    sort(a, a+m); sort(b, b+n);
    for(i=0; i<m; i++)
   {
      for(j=0; j<n; j++)
      {
         if(a[i]==b[j])
         {
            tot = 0;
            for(x=0; x<k; x++) { if(a[i]==c[x]) tot++; }
            if(tot==0) { c[k] = a[i]; k++; }
         }
      }
   }
   for(i=0; i<k; i++) cout<<c[i]<<" ";
}
