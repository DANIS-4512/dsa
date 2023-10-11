#include <stdio.h>
void insertionSort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int current=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if (arr[j]>current  )
            {
                arr[j+1]=arr[j];
            }else{
                break;
            }
               
            
            
        }arr[j+1]=current;
    }
    
}
int binarySearch(int arr[],int n,int key){
    int start=0;int end=n-1;
    for (int i = 0; i < n; i++)
    {
        int mid=(start+end)/2;

        if (arr[mid]==key)
        {
            return mid;
        }else if (arr[mid]>key)
        {
            end=mid-1;
        }else{
            start=mid+1;
        }
        
        
        
    }
    
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%i   ",arr[i]);
    }printf("\n");
    
}
int main()
{
    int n=0;
    printf("enter n\n");
    scanf("%i",&n);
    int arr[n];

    printf("enter array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%i",&arr[i]);
    }
    insertionSort(arr,n);
    printf("the sorted array is\n");
    printArray(arr,n);

    int key=0;
    printf("enter the element you want to search from the sorted array\n");
    scanf("%i",&key);
    printf("the required output is \n%i  ",binarySearch(arr,n,key));

    return 0;
}