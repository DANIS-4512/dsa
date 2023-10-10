#include <iostream>
using namespace std;
int count (int n){
   
   if (n==0)
   {
    return 0;
   }
   
   
   
   
   else if (n%2==0)
    {
        return 1+count(n/2);
    }else
    {
        return count(n/2);
    }
    
    
    return count(n);
}
int main()
{
int n;
cout<<"enter n";
cin>>n;
cout<<count(n);
return 0;
}