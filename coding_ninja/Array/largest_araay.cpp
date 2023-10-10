#include <iostream>

using namespace std;
int main()
{
    int n;
    cout
        << "Enter n: ";
    cin >> n;

    int input[100];
    

    for (int i = 0; i < n; i++)
    {

        cin >> input[i];
        cout << "\t" << input[i] << endl;
    }

    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < input[i])
        {
            max = input[i];
        }
    }
    cout << "max \t" << max << endl;

    return 0;
}