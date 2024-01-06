//to find geometric sum 1+1/2+1/4+...+1/(2^k)
#include <iostream>
#include <math.h>
using namespace std;
double geometric_sum(int n){
    if(n==0)return 1;
    double ans= 1/(double)pow(2,n)+geometric_sum(n-1);
    //for 3 just replace 2 with 3.
    return ans;
}
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
cout<<"geometric sum is "<<geometric_sum(n);
return 0;
}