#include <iostream>
using namespace std;
int linearSearch(int  arr[],int n, int key){
    int i=0;
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        
        
    }
    return -1;
    
}
int binarySearch()
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
int key;
cout<<"enter element to be searched"<<endl;
cin>>key;
int result=linearSearch(arr,n,key);
cout<<"the result is "<<result;


return 0;
}