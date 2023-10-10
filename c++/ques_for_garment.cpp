#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key )
        {
           
           return 1;
        }

        
    }
    return 0;



}
int main(){
    int arr[10]={57,6,7,8,0,3,1,4,56,45};
    cout<<"ENter the element to search: "<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"Key is present"<<endl;

    }else
    {
        cout<<"Key is absent"<<endl;
    }
    return 0;
    

}