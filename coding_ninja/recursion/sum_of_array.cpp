#include <iostream>
using namespace std;
int sum(int arr[], int n)
{
   if(n>0){
    cout<<"  "<<n <<endl;
    if (n == 1)
    {
        return arr[0];
    }

    int smallouput = sum(arr+1, n - 1)+arr[0];

    return smallouput;
   }
}

int main()
{
    int n;
    cout << "enter size" << endl;
    cin >> n;
    int arr[n];
    cout << "enter array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sum(arr, n);

    return 0;
}
