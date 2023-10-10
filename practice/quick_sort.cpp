#include <iostream>
using namespace std;
int binarysearch(int input[],int n,int key){
    int start=0,end=n-1;
    for (int i = 0; i < n-1; i++)
    {
        int mid=start+(end-start)/2;
        if (input[mid]==key)
        {
            return  mid;
        }else if (input[mid]>key)
        {
            end=mid-1;
        }else{
            start=mid+1;
        }
        
        
        
    }
    
}
int linearsearch(int input[],int n,int key){

    for (int i = 0; i < n; i++)
    {
        if (key==input[i])
        {
            return i;
        }
        
    }return -1;
    
}


void selectionsort(int input[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int min=input[i];int minindex=i;
        for (int j = i+1; j < n; j++)
        {
            if (input[j]<min)
            {
                min=input[j];
                minindex=j;
            }
            
        }int temp=input[i];
        input[i]=input[minindex];
        input[minindex]=temp;
        
    }
    
}
void bubblesort(int input[],int n){
    for (int j = 0; j < n-1; j++)
    {
        for (int i = 0; i < n-1-j; i++)
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



void insertionsort(int input[],int n){
    for (int  i = 1; i < n; i++)
    {
        int current=input[i];
        int j;
        for ( j = i-1; j >=0; j--)
        {
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
    cout<<"enter array";
    for (int  i = 0; i < n; i++)
    {
        cin>>input[i];
    }
   /* int key;
    cout<<"enter key";
    cin>>key;
   cout<< binarysearch(input,n,key);
    */
  insertionsort(input,n);
   printarray(input,n);
   return 0;
}