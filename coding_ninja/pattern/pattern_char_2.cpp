#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int i = 1;
    char letter = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {

            cout << letter;
            j++;
        }
        cout << endl;
        letter++;
        i++;
    }

    return 0;
}