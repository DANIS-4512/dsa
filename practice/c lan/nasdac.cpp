#include <iostream>
using namespace std;
void merge(int input[], int si, int ei)
{
    int mid = (si + ei) / 2;
    int len1 = mid - si + 1;
    int len2 = ei - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int main_array_index = si;
    for (int i = 0; i < len1; i++)
    {
        first[i] = input[main_array_index++];
    }
    for (int i = 0; i < len2; i++)
    {
        second[i] = input[main_array_index++];
    }

    int index1 = 1;
    int index2 = 0;
    main_array_index = si;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            input[main_array_index++] = first[index1++];
        }

        /* code */
    }
    while (index1 < len1)
    {
        input[main_array_index++] = first[index1++];
    }
    while (index2 < len2)
    {
        input[main_array_index++] = second[index2++];
        /* code */
    }

 
}
void mergesort(int input[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = (si + ei) / 2;
    mergesort(input, si, mid);
    mergesort(input, mid + 1, ei);
    merge(input, si, ei);
}
int main()
{
  int input[5]={2,3,44,46,5,};
  int n=5;
    mergesort(input, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;

    
}