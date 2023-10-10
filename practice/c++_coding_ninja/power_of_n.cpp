#include <iostream>
using namespace std;
int  power(int base,int exponent){
    if (base==0)
    {
        return 0;
    }if (exponent==0&&base!=0   )
    {
        return 1;
        /* code */
    }

    int smalloutput=base*power(base,(exponent-1));
    return smalloutput;
    
    
}
int main()
{
int base;
int exp;
cout<<"enter base"<<endl;
cin>>base;
cout<<"enter exponent"<<endl;
cin>>exp;
cout<<power(base,exp);
return 0;
}