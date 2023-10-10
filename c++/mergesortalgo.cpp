#include <iostream>
using namespace std;
void merge(int input[], int si, int ei)
{
    int mid = si + (ei - si) / 2;
    // length of two sorted array
    int len1 = mid - si + 1;
    int len2 = ei - mid;
    // create two array for two sorted array
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    // let make one main array where these two array will be stored

    int mainarrayindex = si;
    // fill values in these two arrrrrrrray
    int i, j, k;
    i = j = k = 0;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = input[mainarrayindex++];
    }
    mainarrayindex = mid + 1;
    for (int j = 0; j < len2; j++)
    {
        arr2[j] = input[mainarrayindex++];
    }
    mainarrayindex = si;
    int index1 = 0;
    int index2 = 0;

    // the algorithm of merge two sorted  array will work

    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] > arr2[index2])
        {
            input[mainarrayindex++] = arr2[index2++];
        }
        else
        {
            input[mainarrayindex++] = arr1[index1++];
        }
    }
    while (index1 < len1)
    {
        input[mainarrayindex++] = arr1[index1++];
    }
    while (index2 < len2)
    {
        input[mainarrayindex++] = arr2[index2++];
    }
}
void mergesort(int input[], int si, int ei)
{
   
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2;
    mergesort(input, si, mid);
    mergesort(input, mid + 1, ei);
    merge(input, si, ei);
}

void printarray(int input[],int m ){
    for (int i = 0; i < m; i++)
    {
        cout<<input[i]<<" ";

    }cout<<endl;
    
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
    int si = 0;
    int ei = n - 1;
    mergesort(input, si, ei);
    printarray(input,n);

    return 0;
}