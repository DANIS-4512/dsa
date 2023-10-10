#include <iostream>
using namespace std;
int insertionsort(int input[],int n){
    for (int i = 1; i < n; i++)
    {
        int current=input[i];
        int j;
        for(j=i-1   ;j>=0;j--){
            if (current<input[j])
            {
                input[j+1]=input[j];
            }else
            {
                break;
            }
            
            
        }input[j+1]=current;
    }
    
}
int printarray(int input[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<input[i]<<" ";
    }cout<<endl;
    
}
int main()
{
int n;
cout<<"enter n";
cin>>n;
int *input=new int [n];
cout<<"enter array";
for (int i = 0; i < n; i++)
{
    cin>>input[i];
}
insertionsort(input,n);
printarray(input,n);
delete []input;
return 0;
}