#include <iostream>
using namespace std;
void insertionSort(int arr[],int n ){
    for (int  i = 1; i < n; i++)
    {
        int current=arr[i];
        int j;
        for ( j = i-1; j >= 0; j--)
        {
            if (arr[j]>current)
            {
                arr[j+1]=arr[j];
            }else{
                break;
            }
            
        }arr[j+1]=current;
        
    }
    
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}

int main(){
int n;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];

for (int i = 0; i < n; i++)
{
    cout<<"enter the array after"<<arr[i-1]<<endl;
    cin>>arr[i];
}
insertionSort(arr,n);
printArray(arr,n);


return 0;
}