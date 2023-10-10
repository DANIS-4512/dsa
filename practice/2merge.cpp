#include <iostream>
using namespace std;
void merge(int input1[],int n,int input2[],int m,int input3[] ){
    int i=0;int j=0;int k=0;
    while (i<n&&j<m)
    {
        if (input1[i]>input2[j])
        {
            input3[k++]=input2[j++];
        }else
        {
            input3[k++]=input1[i++];
        }
        
        
        /* code */
    }while (i<n)
    {
        input3[k++]=input1[i++];
    }while (j<m)
    {
        input3[k++]=input2[j++];
    }
    
    
    
}
void printarray(int ans[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
    
}
int main()
{
    int input1[5]={1,3,5,7,9};
    int input2[3]={2,4,6};
    int input3[8]={0};
    merge(input1,5,input2,3,input3);
    printarray(input3,8);
return 0;
}