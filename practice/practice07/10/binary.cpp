#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start=0;int end=n-1;
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
            start= mid+1;
        }
        
        
    }
    
}
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
cout<<"enter array in sorted manner"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int key;
cout<<"enter element to be searched"<<endl;
cin>>key;
int result=binarySearch(arr,n,key);
cout<<"the result is "<<result;
return 0;
}