#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"enter n";
cin>>n;
int i=1;
char val='A';
while (i<=n)
{
    int j=1;
    while (j<=i)
    {
        cout<<val;
        val++;
        j++;
    }cout<<endl;
    i++;
    
}


return 0;
}