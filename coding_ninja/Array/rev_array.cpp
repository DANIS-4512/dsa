#include <iostream>
using namespace std;


int print_Array(int arr[],int n){
 
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
}
int reverse(int arr[],int n){
int j=n-1;
for (int i = 0; i < n; i++)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    j--;

}
}
int main()
{

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
reverse(arr,n);
 

cout<<print_Array(arr,n);

return 0;
}











































