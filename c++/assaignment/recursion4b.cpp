#include <iostream>
#include <bits/stdc++.h>
using namespace std;
double geometricsum(int n){
    if (n==0)
    {
        return  1;
    }

    double ans=1/(double)pow(2,n)+geometricsum(n-1);
    return ans;
    
}
int main()
{
int n;
cout<<"enter n";
cin>>n;
cout<<geometricsum(n);
return 0;
}