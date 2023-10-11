#include <stdio.h>
int linearSearch(int arr[],int n,int key){
    int i;
    for (int i = 0; i < n;   i++)
    {
        if (arr[i]==key)
        {
            return i;  
        }
        
    }
     return -1;
    
}
int main()
{
    int n;
    printf("enter n \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
       
    }
    printf("enter key\n");
    int key=0;
    scanf("%i",&key);
  
    
    printf(" %i",linearSearch(arr,n,key));
    return 0;
}