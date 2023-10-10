#include <iostream>
using namespace std;
int recursion(int a,int b){
    if (a==0||b==0)
    {
        return 0;
    }if (a==1)
    {
        return b;
        /* code */
    }if (b==1)
    {
        return a;
    }
    

    int smalloutput=recursion ;
    return smalloutput;
    
    
}
int main()
{
int a,b;
cout<<"enter first and  second number"<<endl;
cin>>a>>b;
return 0;
}