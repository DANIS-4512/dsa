#include <iostream>
using namespace std;
int printArray(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}
int bubbleSort(int input[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <n-1-i; j++)
        {
            if (input[j] > input[j + 1])
            {
                int temp = input[j];
                input[j] = input[j + 1];
                input[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int input[100];
    cout << "enter array";
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    bubbleSort(input, n);
    printArray(input, n);
}