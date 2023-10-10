#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the n";
    cin >> n;
    bool divide = false;
    for (int d = 2; d < n; d++)
    {
        if (n % d == 0)
        {
            divide = true;
            break;
        }
    }
    if (divide)
    {
        cout << "Not prime: " << endl;
    }
    else
    {
        cout << "prime" << endl;
    }

    return 0;
}