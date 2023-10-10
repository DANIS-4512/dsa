#include <iostream>
using namespace std;
int main()
{
    int n=5;
int input[n]={1,2,3,1,2};
for(int i=0;i<=5;i++){
    int end=n-1;
    if (input[i]==input[end]    )
    {
        return 0;
        /* code */
    }else
    {
        return input[i];
        cout<<input[i];
    }
    end--;
    
}
return 0;
}