#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0) // Base	Case
    {
        return 1;
    }
    return n * fact(n - 1); // Recursive	call	with small	calculation
}
int main()
{
    int num;
    cout<<"enter num";
    cin >> num;
    cout << fact(num);
    return 0;
}