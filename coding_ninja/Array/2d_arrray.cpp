#include <iostream>
using namespace std;
int main()
{
int input[100][100];
int m,n;
cout<<"enter m and n";
cin>>m>>n;
cout<<"enter array"<<endl;
for (int i = 0; i < m; i++)
{
    for (int k = 0; k < n; k++)
    {
        cin>>input[i][k];
    }
    
}
cout<<" Row Wise"<<endl;
for (int i = 0; i < m; i++)
{
    
    for (int  k = 0; k < n; k++)
    {
        cout<<input[i][k];
        cout<<" ";
    }
    cout<<endl;
}
cout<<"Column Wise"<<endl;
for (int k = 0; k < n; k++)
{
    for (int i = 0; i < m; i++)
    {
        cout<<input[i][k];
        cout<<" ";
    }cout<<endl;
    
}


cout<<input[1][1];
return 0;
}