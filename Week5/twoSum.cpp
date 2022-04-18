#include <iostream>
using namespace std;

int * twoSum(int *, int, int);

int main()
{
    int n, i, t, key; cin >> t;
    while (t--)
    {
        cin >> n; int a[n];
        for (i=0; i<n; i++) cin >> a[i];
        cin >> key;
        int *r = twoSum(a, n, key);
        cout << a[*r] << ", " << a[*(r+1)] << endl;
    }
}

int* twoSum(int* nums, int numsSize, int target)
{
    int i, j;
    int * returnNums = new int[2];
        for(i=0; i<numsSize; i++)
        {
            for(j=i+1; j<numsSize; j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    returnNums[0] = i;
                    returnNums[1] = j;
                }
            }
        }
    return returnNums;
}
