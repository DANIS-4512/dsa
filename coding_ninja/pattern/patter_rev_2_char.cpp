#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"enter n";
cin>>n;
char var='A';
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=i)
    {
        char lal=((n+var)-2)+j;
        cout<<lal;
        j++;
    }cout<<endl;
        var--;
    i++;
    
}


}