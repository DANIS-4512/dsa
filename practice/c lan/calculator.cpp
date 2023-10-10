#include <iostream>
#include <ostream>
#include<math.h>
using namespace std;
 int add(int num1,int num2){
    int ans;

    cout<< ans=num1+num2;
}
 int sub(int num1,int num2){
    int ans;

    cout<< ans=num1-num2;
}
 int div(int num1,int num2){
    int ans;

    cout<< ans= num1/num2;
}
int mul(int num1,int num2){
    int ans;
    cout<<ans=num1*num2;
}
int main()
{
int num2,num1;cout<<"enter num1";cin>>num1;
cout<<"enter num2";cin>>num2;
int step;
cout<<"enter operator add,sub,mul,div";
cin>>step;
int add,sub,mul,div;
if (step==add)  
{
    add(num1,num2);
    /* code */
}else if (step==sub)
{
    sub(num1,num2);
}else if (step==div)
{
    div(num1,num2);
}else
{
    mul(num1,num2);
}




return 0;
}