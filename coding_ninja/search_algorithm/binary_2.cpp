#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {

            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int input[100];
    cout << "enter the array";
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int key;
    cout << "enter key";
    cin >> key;
    cout << binarySearch(input, n, key);

    return 0;
}