#include <iostream>
using namespace std;
int selectionSort(int input[], int n)
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
int bubbleSort(int arr[], int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
void printArray(int arr[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int *input = new int[n];
    cout << "enter array";
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    selectionSort(input, n);
    printArray(input, n);
}