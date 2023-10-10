#include<iostream>
using namespace std;


int fibo(int n)
{
    if (n == 0 || n == 1)
    { // Base	Case
        return n;
    }
    int a = fibo(n - 1); // Recursive	call
    int b = fibo(n - 2); // Recursive	call
    return a + b;        // Small	Calculation and	return	statement
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    cout<<fibo(n);
}