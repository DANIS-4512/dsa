#include <iostream>

using namespace std;
void printArray(int input[][100],int m,int n){//here we need to specify column it necessary

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<input[i][j]<<" ";

        }cout<<endl;
        
    }
    
}
int main()
{
    int input[100][100];
    int m,n;
    cout<<"enter m and n";
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>input[i][j];
        }
        
    }
    printArray(input,m,n);

return 0;
}