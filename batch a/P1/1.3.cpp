#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string arr[n];

    // Input strings
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Find the maximum string length
    int maxLength = arr[0].length();

    for (int i = 1; i < n; i++)
    {
        if (arr[i].length() > maxLength)
        {
            maxLength = arr[i].length();
        }
    }

    // Print all strings having maximum length
    for (int i = 0; i < n; i++)
    {
        if (arr[i].length() == maxLength)
        {
            cout << arr[i] << " length " << maxLength << endl;
        }
    }

    return 0;
}
