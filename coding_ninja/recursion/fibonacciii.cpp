#include <iostream>
using namespace std;
int fibonacii(int n){
    if (n==0)
    {
        return 0;

    }if (n==1)
    {
        return 1;
    }
    
    int smalloutput1=fibonacii(n-1);
    int smalloutput2=fibonacii(n-2);

    return smalloutput1+smalloutput2;
    
}
int main()

{
int n;
cout<<"enter n";
cin>>n;
cout<<fibonacii(n);
return 0;
}