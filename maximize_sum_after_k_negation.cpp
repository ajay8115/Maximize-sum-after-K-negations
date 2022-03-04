// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        sort(a, a + n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                cnt++;
            }
        }

        if (cnt >= k)
        {
            for (int i = 0; i < k; i++)
            {
                a[i] = (-1) * a[i];
            }

            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += a[i];
            }

            return sum;
        }

        if ((k - cnt) % 2 == 0)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += abs(a[i]);
            }
            return sum;
        }

        if ((k - cnt) % 2 != 0)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                a[i] = abs(a[i]);
                sum += a[i];
            }

            sort(a, a + n);
            return sum - 2 * (a[0]);
        }
    }
};