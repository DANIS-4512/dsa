#include <iostream>
using namespace std;
int reverse(int input[],int n){
    int i=0,j=n-1;
    while (i<j)
    {
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;j--;
    }


}
int  PrintArray(int input[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<input[i]<<" ";

    }cout<<endl;
    
}
int main()
{
    int a=10;
    int b[10]={1,2,3,4,5,6,7,};
    reverse(b,7);
    PrintArray(b,7);

return 0;
}