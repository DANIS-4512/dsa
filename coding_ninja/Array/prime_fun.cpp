#include <iostream>
using namespace std;
bool isPrime(int n)
{
    int d = 2;
    while (d < n)
    {
        if (n % d == 0)
        {
            return false;
        }
        d++;
    }
    return true;
}
int main()
{
    bool ans = isPrime(31);//1 for true
    cout << ans<<endl;
    ans = isPrime(85);//0 for false 
    cout << ans<<endl;

    
}