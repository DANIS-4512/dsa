#include <iostream>
using namespace std;
int power(int x,int n){
    if (n==0)
    {
        return 0;
    }if (n==1)
    {
        return x*n;
    }
    int smallpower=power(x,n-1);
    return smallpower*x;
    
    
}
int main()
{
    int x;cout<<"enter x";
    cin>>x;
    int n;
    cout<<"enter n";
    cin>>n;
    
    cout<<power(x,n);
return 0;
}