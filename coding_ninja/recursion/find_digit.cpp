#include <iostream>
using namespace std;
int digit(int n  ){
    if (n<10)
    {
        return 1;
    }
    int smalldigit=digit(n-1);
    return smalldigit+1;
   
}

int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
cout<<digit(n);
return 0;
}