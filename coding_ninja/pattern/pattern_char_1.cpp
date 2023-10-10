#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"enter n";
cin>>n;
char al='A';
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        cout<<al;
        al++;
        j++;

    }cout<<endl;
    i++;
    
}

return 0;
}