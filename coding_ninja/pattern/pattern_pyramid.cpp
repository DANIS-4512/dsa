#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = 1;
        while (space < n - i+1)
        {
            cout << " ";
            space++;
        }

        int j = 1;
        while (j <= i)
        {
            cout << j<<"";
            j++;
        }

        int k = i - 1;
        while (k >= 01)
        {
            cout << k<<"";
            k--;
        }

        cout << endl;
        i++;
    }

    return 0;
}