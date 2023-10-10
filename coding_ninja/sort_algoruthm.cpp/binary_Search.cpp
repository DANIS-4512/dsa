#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int val)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if ( arr[mid] == val)
        {
            return mid;
        }
        else if (val < arr[mid])
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
    cout << "Enter n";
    cin >> n;
    int input [100];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter \t"<<n<< " no of array";
        cin >> input[i];
    }
    int val;
    cout<<"Enter the value you want to search";
    cin >> val;
    cout << " the answer is  :  "<<binarysearch(input, n, val) << endl;
}