#include <iostream>
using namespace std;
int count(int n){
    if (n==0)
    {
        return 0;
    }if (n%10==0)
    {
        return 1+count(n/10);
    }else
    {
        return count(n/10);
    }
    
    
    
}
int main()
{
int n;
cout<<"enter n";
cin>>n;
cout<<count(n);
return 0;
}