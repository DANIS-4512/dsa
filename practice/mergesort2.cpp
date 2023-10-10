#include <iostream>
using namespace std;
void merge(int input,int si ,int ei){
    int i,j,k;
    i=j=k=0;
    int len1=mid-si+1;
    int len2=ei-mid;
    int first[len1];
    int second[len2];
    int index1=0;
    int index2=0;
    int mainarrayindex=si;
    while (/* condition */)
    {
        /* code */
    }
    

}

void mergesort(int input[],int si,int ei){
    if (si>=ei)
    {
        return ;

    }
    int mid=si+(ei-si)/2;
    mergesort(input,si,mid);
    mergesort(input,mid+1,ei);
    merge(input,si,ei);
}
void printarray(int input[],int n){
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
    int *input=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    int si=0,ei=n-1;
    mergesort(input,si,ei);
    
return 0;
}