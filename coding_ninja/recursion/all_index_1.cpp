//approach from the start division
#include <iostream>
using namespace std;
int al_index_recursive(int input[],int size,int x,int output[]){
    if (size==0)return 0;
    int small_ans=all_index_recursive(input+1,size-1,x,output);

    if(input[0]==x){
        for(int i=small_ans-1;i>=0;i--){
            output[i+1]=output[i]+1;
        }
        output[0]=0;
        small_ans++;
    }
    else{
        for(int i=small_ans-1;i>=0;i--){
            output[i]=output[i]+1;
        }
    }
    return small_ans;
}
void all_index(int arr[],int n,int x){
    int output[n];
    int size=al_index_recursive(arr,n,x,output);
    for (int i = 0; i < n; i++)
    {
        cout<<output[i]<<"  ";
    }cout<<endl;
    
}
int main()
{
int n;
cout<<"enter size  ";
cin>>n;
int arr[n];
cout<<"enter array"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int x;
cout<<"enter the number to be searched by indexes  ";
cin>>x;
all_index(arr,n,x);

return 0;
}