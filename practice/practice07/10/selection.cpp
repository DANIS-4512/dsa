#include <iostream>
using namespace std;
int   selectionSort(int input[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int min=input[i];int min_index=i;
        for (int j = i+1 ; j < n; j++)
        {
            if (input[j]<min)
            {
                min=input[j];
                min_index=j;
            }
            
        }int temp=input[i];
        input[i]=input[min_index];
        input[min_index]=temp;
        
    }
    
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
cout<<"enter array that need to be sorted"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

selectionSort(arr,n);
printArray(arr,n);

return 0;
}