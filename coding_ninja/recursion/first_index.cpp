#include <iostream>
using namespace std;
int first_index(int n, int arr[], int x)
{
    if(n==0)return -1;
    if(arr[0]==x)return 0;
    int ans=first_index(n-1,arr+1,x);
    if(ans!=-1)return ans+1;
    else{  return ans;}

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
    cout << first_index(n, arr, x);

    return 0;
}