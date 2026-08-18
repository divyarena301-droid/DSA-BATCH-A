#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Find duplicate elements
    for (int i = 0; i < n; i++)
    {
        bool printed = false;

        // Check if the element was already processed
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                printed = true;
                break;
            }
        }

        if (printed)
            continue;

        // Check if the element appears again
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}
