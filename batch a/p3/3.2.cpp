#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 0, 1, 2, 0, 1};

    int zero = 0;
    int one = 0;
    int two = 0;

    // Count the number of 0s, 1s, and 2s
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }

    // Place all 0s
    int idx = 0;

    while (zero--)
    {
        arr[idx] = 0;
        idx++;
    }

    // Place all 1s
    while (one--)
    {
        arr[idx] = 1;
        idx++;
    }

    // Place all 2s
    while (two--)
    {
        arr[idx] = 2;
        idx++;
    }

    // Print the sorted array
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
