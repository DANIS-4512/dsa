#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int val)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int arr[] = {2, 3, 4, 5, 10, 40};
    int val = 40;
    int n = sizeof(arr) / sizeof(arr[0]);
    // function call

    int result = linearSearch(arr, n, val);
    (result == -1)
        ? cout << "element is not present in array"
        :cout<<"element is present in index"<<result;

        return 0;
}