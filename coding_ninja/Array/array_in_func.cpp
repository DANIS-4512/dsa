#include <iostream>
using namespace std;

void increment(int a,int b[],int n){
    a++;
    b[0]++;
}
int main()
{

    int a=10;
    int b[10]={1,2,3};
    increment(a,b,10);
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b[0]<<endl;

return 0;
}