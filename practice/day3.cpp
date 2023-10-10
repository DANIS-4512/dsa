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

int binarySearch(int input[],int n,int key){
    int start=0;int end=n-1;
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
        
        
        
    }
    

}

int selectionSort(int input[],int n){
    for (int  i = 0; i < n-1; i++)
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
int bubbleSort(int input[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (input[j]>input[j+1])
            {
                int temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
            
        }
        
    }
    
}
int insertionSort(int input[],int n){
    for (int i = 1  ; i < n; i++)
    {
        int current=input[i];
        int j;
        for (int k = i-1; k >= 0; k++)
        {
                if (input[k]>input[k+1])
                {
                    input[k+1]=current;
                }else
                {
                    break;
                }
                
                
        }
        
    }
    
}

int printArray(int input[],int n){
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
cout<<"enter arraaay";
for (int i = 0; i < n; i++)
{
    cin>>input[i];
}int key;
/*cout<<"enter key";
cin>>key;
cout<<linearSearch(input,n,key);
return 0;*/
bubbleSort(input,n);
printArray(input,n);
}



