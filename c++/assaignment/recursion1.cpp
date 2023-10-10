#include <iostream>
using namespace std;
int multi(int m,int n){
    if (n==0)
    {
        return 0;
    }
   
    int smalloutput=m*(n-1);
    cout<<endl;
    int output=smalloutput+m;
    cout<<output;
    return output;
    
}
int main()

{
int a,b;
cout<<"enter a,b"<<endl;
cin>>a>>b;
multi(a,b);
return 0;
}