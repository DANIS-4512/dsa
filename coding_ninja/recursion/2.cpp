#include <iostream>
using namespace std;
int linearSearch(int input[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (input[i]==key)
        {
            return i;
        }
        
    }return -1;
    
}
int selectionsort(int input[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int min=input[i];int min_index=i;
        for (int j = i+1; j < n; j++)
        {
            if (input[j]<min)
            {
                min=input[j];
                min_index=j;
            }
            
        }int temp=input[i];
        input[i]=input[min_index];
        input[min_index]=temp;
        
    }
    



}
int bubblesort(int input[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int j =1;
        for (int j = 0; j < n-1-i; j++)
        {
            
        }
        
    }
    
}

int binarysearch(int input[],int n,int key){
    int start=0, end=n-1;
    for (int i = 0; i < n; i++)
    {
        int mid=(start+end)/2;
        if (input[mid]==key)
        {
            return mid;
        }else if (input[mid]>key)
        {
            end=mid-1;
            
        }else
        {
            start=mid+1;
        }
        
        
        
    }return -1;
    
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
cout<<"enter n";cin>>n;
int *input=new int[n];cout<<"enter array";
for (int i = 0; i < n; i++)
{
    cin>>input[i];
}/*int key;cout<<"enter key";cin>>key;
cout<<binarysearch(input,n,key);
printarray(input,n);*/
selectionsort(input,n);
printarray(input,n);
delete  [] input;
return 0;
}