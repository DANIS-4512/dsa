#include <iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];

        for(int j=i-1;j>=0;j++){
            if (arr[j+1]<arr[j])
            {
                arr[j+1]=temp;
            }
            else{
                break;
            }
            
        }

        
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
cout<<"enter the to be sorted"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
insertionSort(arr,n);
printArray(arr,n);
return 0;
}