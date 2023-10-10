#include<iostream>
using namespace std;
int main(){

/*
 the sum and product--->
    int n ,a;
    cout<<"enter n and a"<<endl;
    cin>>n>>a;
    int k=(a+n);
    int x=a*n;
  
    cout<<"the sum of numbers is"<<endl<<k<<endl<<"the product of the numbers is"<<endl<<x<<endl;
*/


int n[5]={1,2,3,4,5};
for (int i = 0; i < n; i++)
{
    n[0]=n-1;
    n[1]=n-2;
    n[3]=n-3;
}

cout<<n;















}
