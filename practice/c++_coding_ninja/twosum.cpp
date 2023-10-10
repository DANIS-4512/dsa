#include <iostream>
using namespace std;
int twosum(int input[],int target){
    for (int i = 0; i < target; i++)
    {
        int j;
        for (j = 1; j < target; j++)
        {
            if (input[i]+input[j]==target)
            {
                cout<<i<<'\t'<<j<<endl;
            }
            
        }
        
    }
    
}
int main()
{
int input[10];
int n;
cout<<"enter n"<<endl;
cin>>n;

cout<<"enter number"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>input[i];
    cout<<endl;
}
int target;
cout<<"enter target";
cin>>target;
cout<<twosum(input,target);

return 0;
}