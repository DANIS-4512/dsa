#include <iostream>
using namespace std;
bool check_num(int arr[],int n,int c){
   
if(n==0)return false;
if(arr[0]==c)return true;
int ans=check_num(arr+1,n-1,c);
return ans;
    
}
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
cout<<"enter array"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int c;
cout<<"enter number to find"<<endl;
cin>>c;
cout<<check_num(arr,n,c);

return 0;
}