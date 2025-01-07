#include <bits/stdc++.h>
using namespace std;

int mostFrequent(int *arr, int n)
{
    int maxcount = 0;
    int element_having_max_freq;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxcount)
        {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
    }

    return element_having_max_freq;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int p[n][n - 1];
        int firstElements[n];
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n - 1; k++)
            {
                cin >> p[j][k];
                if (j == 0)
                    firstElements[j] = p[j][0];
            }
        }

        int firstElement = mostFrequent(firstElements, n);
        for (int j = 0; j < n; j++)
        {
            if (p[j][0] != firstElement)
            {
                cout << firstElement << ' ';
                for (int t = 0; t < n - 1; t++)
                {
                    cout << p[j][t] << ' ';
                }
            }
        }
    }
}
