#include <iostream>
using namespace std;
int main()
{
int n,sum=0,i=2;
cout<<"Enter n: ";
cin>>n;

while (i<=n)
{
    sum+=i;
    i=i+2;
}
cout<<sum;
return 0;
}