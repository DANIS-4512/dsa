#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
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
    cout << "enter array";
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int key;
    cout << "enter key";
    cin >> key;
    cout << binarySearch(input, n, key);

}