#include <iostream>
// global variable
using namespace std;
int a = 10;
void f()
{
    a++;
    cout << a << endl;
}

int main()
{
    cout << a << endl;
    f();
    cout << a << endl;
    return 0;
}//avoid it bcoz it is risky as anyone can change