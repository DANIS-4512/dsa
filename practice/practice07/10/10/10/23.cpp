#include <iostream>
using namespace std;
void insertionSort(int arr[],int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if (arr[j]>current)
            {
                arr[j+1]=arr[j];
            }else{
                break;
            }
            
        }arr[j+1]=current;
    }
    
}
int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    for (int i = 0; i < n; i++)
    {   
        int mid=(start+end)/2;
        if (arr[mid]==key)
        {
            return mid;
        }else if (arr[mid]>key)
        {
            end=mid-1;
        }else{
            start=mid+1;
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
cout<<"enter array"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
insertionSort(arr,n);
printArray(arr,n);
int key;
cout<<"enter the element you want to search"<<endl;
cin>>key;
int result=binarySearch(arr,n,key);
cout<<"the result     "<<result<<endl;
return 0;
}