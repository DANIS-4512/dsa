#include <iostream>
using namespace std;
int  printno(int n)
{
     //cout<<n<<endl;
    int start = 0;
    int end = n - 1;
    if (n == 0)
    {
        
        return 1;
    }
    int smalloutput=printno(n-1);
    cout<<n<<" ";
    int output=smalloutput*1;
    return output;
}
int main()
{
    int n;
    cin >> n;
    cout << printno(n);
    return 0;
}