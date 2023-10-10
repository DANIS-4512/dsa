#include <iostream>
using namespace std;


int power(int b,int n){
    if(b==0 ){
        return 0;
    }if (n==0&&b!=0)
    {
        return 1;
    }

    int smalloutput=b*power(b,(n-1));
    int output=smalloutput;
    return output;
    
}
int main()
{
int base;int n;
cout<<"enter base"<<endl;
cin>>base;
cout<<endl;
cout<<"enter power"<<endl;
cin>>n;
cout<<endl;
cout<<power(base,n);
return 0;
}