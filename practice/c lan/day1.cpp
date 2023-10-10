#include <iostream>
using namespace std;
int bubbleSort(int input[], int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1 - j; i++)
        {
            if (input[i] > input[i + 1])
            {
                int temp = input[i];
                input[i] = input[i + 1];
                input[i + 1] = temp;
            }
        }
    }
}


int insertionSort(int input[],int n){
    for (int i = 1; i < n; i++)
    {
        int current=input[i];
        int j;
        for ( j = i-1; j >=0; j--)
        {
            if (current<input[j])
            {
                input[j+1]=input[j];
            }else
            {
                break;
            }
            
            
        }input[j+1]=current;
        
    }
    
}
int linearSearch(int input[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (input[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int selectionSort(int input[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = input[i];
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (input[j] < min)
            {
                min = input[j];
                min_index = j;
            }
        }
        int temp = input[i];
        input[i] = input[min_index];
        input[min_index] = temp;
    }
}
int printArray(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}
int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, key;
    int *input = new int[n];
    cout << "enter n";
    cin >> n;
    cout << "enter array";
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    /*cout << "enter key";
    cin >> key;
    cout << linearSearch(input, n, key);
  
    cout << binarySearch(input, n, key);
    selectionSort(input,n);
    */
   
    //bubbleSort(input, n);
    insertionSort(input,n);
    
    printArray(input, n);
    delete[] input;
    return 0;
}