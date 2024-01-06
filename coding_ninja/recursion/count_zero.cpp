//to count the no of zeros in a no
#include <iostream>
using namespace std;
int count_zeros(int n){
    if(n==0)return 1;
    if(n<10)return 0;//base case
    else if(n%10==0){
        return count_zeros(n/10)+1;
    }return count_zeros(n/10);
}
int main()
{
int n;
cin>>n;
cout<<count_zeros(n);
return 0;
}