#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start=0,end=n-1;
    
    for (int i = 0; i < n; i++)
    {
        int mid=(start+end)/2;
            /* code */

        if (key==arr[mid])
        {
            return mid;
            
        }else if (key>arr[mid])
        {
            start=mid+1;
        }else
        {
            end=mid-1;
        }
        
        
        
    }
    return -1;
}
int main()
{
int n;
cout<<"enter n";cin>>n;
int input[100];
cout<<"enter input";for (int i = 0; i < n; i++)
{
    cin>>input[i];
}int key;cout<<"enter key";cin>>key;
cout<<binarySearch(input,n,key);

return 0;
}