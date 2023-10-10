#include <iostream>
using namespace std;
class odd_even
{
    int a, b;

public:
    void odd()
    {
        cout << "Enter the number to check: " << endl;
        cin >> a >> b;
        if (a % 2 == 0)
        {
            cout << "the %i is even ",a;
        }
        else
        {
            cout << "the %i is odd",a;
        }
    }

    void even()
    {

        if (b % 2 == 0)
        {
            cout << "the %i is even ",b;
        }
        else
        {
            cout << "the %i is odd",b;
        }
    }
};
 int main()
{
    odd_even obj;
    obj.odd();
    obj.even();
    return 0;
}