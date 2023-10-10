#include <iostream>
using namespace std;
int selectionSort(int input[],int n,int key){
    for (int i = 0; i < n-1; i++)
    {
        int min=input[i];int min_index=i;
        for (int j = i+1; j < n; j++)
        {

            if (input[i+1]<input[i])
            {
                min=input[j];
                min_index=j;
            
            }
            
            /* code */
        }




        
    }
    
}
int main()
{
int n;cout<<"enter n";cin>>n;
int *input=new int[n];
cout<<"enter array";
for (int i = 0; i < n; i++)
{
    cin>>input[i];
}
int key;cout<<"enter key";cin>>key;

selectionSort(input,n,key);
delete []input;
return 0;
}