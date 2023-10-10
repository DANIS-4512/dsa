#include <iostream>
using namespace std;
int search(int arr[],int n,int x){
    int i;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
        return -1;
    }
    
}
int main()
{

int arr[]={2,3,4,5,6,7,8};
int x=8;
int n=sizeof[arr]/sizeof[0];
int result=search(arr,n,x);

return 0;
}