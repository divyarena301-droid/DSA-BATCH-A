#include <iostream>
using namespace std;

int rec(int t, int n[], int no)
{
    if (no <= 0)
    {
        return 0;
    }

    if (n[no - 1] == t)
    {
        return no;
    }

    return rec(t, n, no - 1);
}

int main()
{
    int no;
    cin >> no;

    int n[no];

    // Input license plate numbers
    for (int i = 0; i < no; i++)
    {
        cin >> n[i];
    }

    int t;
    int count = 0;

    cout << "Enter the License plate to search: ";
    cin >> t;

    // Linear search
    for (int j = 0; j < no; j++)
    {
        if (n[j] == t)
        {
            cout << "Found at position " << j + 1 << endl;
            count++;
        }
    }

    // Recursive search
    int ans = rec(t, n, no);

    if (ans != 0)
    {
        cout << "Found at " << ans << endl;
    }

    if (count == 0)
    {
        cout << "Not Found" << endl;
    }

    return 0;
}
