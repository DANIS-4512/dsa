#include <iostream>
using namespace std;
void PrintArray(int input[],int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<input[i]<<"\t";
    }cout<<endl;
    
}
void bubbleSort(int input[],int n){
    for (int  j = 0; j < n-1; j++)
    {
        for (int  i = 0; i < n-1-j; i++)
        {
            if (input[i]>input[i+1])
            {
                int temp=input[i];
                input[i]=input[i+1];
                input[i+1]=temp;

            }
            
        }
        
    }
    
}
int main()
{
    int n;cout<<"enter n";cin>>n;
    int input[100];
    cout<<"enter array";
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }bubbleSort(input,n);
    PrintArray(input,n);
    
return 0;
}