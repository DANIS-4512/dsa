#include <iostream>
using namespace std;
int count_zeros(int a){
  if(a<=0&&a>-1){return 1;
       
  }
  
  int ans=a%10;
  if(ans==0)return (1+count_zeros(a/10))-1;
  else count_zeros(a/10);
}
int main()
{
int a;
cout<<"enter number"<<endl;
cin>>a;
cout<<count_zeros(a);
return 0;
}