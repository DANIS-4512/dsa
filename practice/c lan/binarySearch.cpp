#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    for (int i = 0; i < n; i++)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end= mid - 1;
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
    int size;
    cout << "enter size";
    cin >> size;
    int *input = new int;
    cout << "enter array";
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    int key;
    cout << "enter key";
    cin >> key;
    cout << binarySearch(input, size, key);

    
}