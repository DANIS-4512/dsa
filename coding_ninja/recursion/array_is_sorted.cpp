#include <iostream>
using namespace std;
bool is_sorted(int arr[],int n){
    if (n==0||n==1)
    {
        return true;
    }if (arr[0]>arr[1])
    {
        return false;
    }
    bool isSmallerSorted=is_sorted(arr+1,n-1);

    return isSmallerSorted;
    
    
}
int main()
{
int n;
cout<<"enter size"<<endl;
cin>>n;
int arr[n];
cout<<"enter array"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
cout<<is_sorted(arr,n);

return 0;
}