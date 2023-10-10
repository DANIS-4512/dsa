#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int val = i;
        while (j <= i)
        {
            cout << val;
            val++;
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}