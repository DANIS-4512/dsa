#include <iostream>
using namespace std;

int fact(int  n){
    int ans=1;
    for (int i = 1      ; i <= n    ; i++)
    {
        ans*=i;
        /* code */
    }return ans;
    
}
int main()
{

  int a;
  cin>>a;
  int output=fact(a);
  
  cout<<output<<endl;
return 0;
}