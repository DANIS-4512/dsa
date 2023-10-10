#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"enter n";
cin>>n;
int i=1;
char huz='A';
while (i<=n)
{
    int k=1;
    while (k<=n)    
    {
        /* code */
        cout<<huz;
        k++;
    }
    cout<<endl;
    huz++;
    i++;

    
}

return 0;
}