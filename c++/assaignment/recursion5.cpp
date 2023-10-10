#include <iostream>
using namespace std;
bool palindrome(char a[],int n){
    int first=a[0];
    int last=a[n-1];
    if (first==last)
    {
        return true;
    }
    else
    {
        return false;
    }
    first++;
    --last;
    
    
}
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
char a[n];
cout<<"enter a"<<endl;
cin>>a;
cout<<palindrome(a,n);
return 0;
}