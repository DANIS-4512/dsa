#include <iostream>
using namespace std;
int factorial(int n){
    if (n==0)
    {
        return 1;
    }
    int smalloutput=factorial(n-1);
    return n*smalloutput;
    
}
int main()

{
    int n;

    cout<<"enter n";
    cin>>n;
    cout<<factorial(n);
return 0;
}