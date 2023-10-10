#include <iostream>
using namespace std;
int linearSearch(int arr[],int n,int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            cout<<i;
        }
        
    }return -1;
    
}
int main()
{
int n;
cout<<"enter n";
cin>>n;
int *p=new int[n];
cout<<"enter array";

for (int  i = 0; i < n; i++)
{
    cin>>p[i];
}int key;cout<<"enter key";
cin>>key;

linearSearch(p,n,key);
return 0;
}