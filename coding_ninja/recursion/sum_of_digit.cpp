#include <iostream>
using namespace std;
int sum_of(int n){
    if(n==0)return 0;
    
    int smallans=sum_of(n/10);
    return smallans+n%10;
}
int main()
{
int n;
cout<<"enter the digit ";
cin>>n;
cout<<sum_of(n);
return 0;
}