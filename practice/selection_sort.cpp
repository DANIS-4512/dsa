#include <iostream>
using namespace std;
int SelectionSort(int input[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = input[i];
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (input[j] < min)
            {
                min = input[j];
                minindex = j;
            }
        }
        int temp = input[i];
        input[i] = input[minindex];
        input[minindex] = temp;
    }
}
int main()
{
    int n;
    cout << "emter n";
    cin >> n;
    int input[100];
    cout << "enter array";
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    SelectionSort(input, n);
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << "\t";
    }
    cout << endl;

    return 0;
}