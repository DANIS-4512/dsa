#include <iostream>
using namespace std;
void merge(int input[], int si, int ei)
{
    int i, j, k;
    i = j = k = 0;
    int mid=si+(ei-si)/2;
    int n = (mid - si) + 1; // length of first half

    int m = (ei - mid); // length of seconf half
    int *firsthalf = new int[n];//first arraay created
    int *secondhalf = new int[m];//second array created
    int mainarrayindex=si;//main array index created

    //now to copy the sorted array in first half and second half

    for (int i = 0; i < n; i++)
    {
        firsthalf[i]=input[mainarrayindex++];
    }mainarrayindex=mid+1;
    for (int j = 0; j < m; j++)
    {
        secondhalf[j]=input[mainarrayindex++];
    }
    int index1=0;
    int index2=0;
    mainarrayindex=si;
    while (index1<n&&index2<m)
    {
        if (firsthalf[index1]<secondhalf[index2]){
            input[mainarrayindex++]=firsthalf[index1++];

        }else
        {
            input[mainarrayindex++]=secondhalf[index2++];
        }
        
            
        
    }
    
    while (index1<n)
    {
        input[mainarrayindex++]=firsthalf[index1++];

        /* code */
    }
    while (index1<m)
    {
        input[mainarrayindex++]=secondhalf[index2++];
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

void printarray(int input[],int n){


    for (int i = 0; i < n; i++)
    {
        cout<<input[i]<< " ";
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
    int mid = si + (ei - si) / 2;

    mergesort(input, si, ei);
    printarray(input,n);

    return 0;
}