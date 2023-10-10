#include <iostream>
using namespace std;
int main()
{
int n ;
cout<<"enter n";
cin>>n;
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=i)
    {
        int x=(j-i)-1;
        cout<<-x;
        
        j++;
    }cout<<endl;
    i++;
    
}


}