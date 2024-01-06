#include <iostream>
using namespace std;
int last_index(int n,int arr[],int x){
    if(n<0)return -1;
    int ans=last_index(n-1,arr+1,x);
    if(ans!=-1)return ans+1;
    else{
        if(arr[0]==x)return 0;
        else{
            return -1;
        }
    }

}

int main()
{
    int n;
    cout << "enter the size" << endl;

    cin >> n;
    cout << endl;
    cout << "enter array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int x;
    cout << "enter integer   ";
    cin >> x;
    cout << endl;
    cout << last_index(n, arr, x);
    return 0;
}