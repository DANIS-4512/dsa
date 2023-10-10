#include <iostream>
using namespace std;
int linearSearch(int arr[],int size,int key){
    int i;
    for ( i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
       
    }return -1;
    
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
int key;
cout<<"enter key"<<endl;
cin>>key;
cout<<"the answer is :   "<<linearSearch(arr,n,key);

return 0;
}