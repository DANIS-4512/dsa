#include <iostream>
using namespace std;

int power(int x, int n){



    if (n == 1)
    {
        return x;
    }
    if (n == 2)
    {
        return x * x;
    }

    int smalloutput1 = power(x,n);
   
    return x*n*smalloutput1;
}
int main()
{
    int x;
            cout
        << "enter x";
    cin >> x;
    int n;
    cout << "enter n";
    cin >> n;
    cout << power(x, n) << endl;
    return 0;
}