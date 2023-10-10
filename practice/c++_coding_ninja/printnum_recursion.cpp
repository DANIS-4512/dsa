#include <iostream>
using namespace std;
int print(int num){
    if (num==0)
    {
        return 0;
    }
   for (int i = 1;  i < num; i++)
   {

    return print(i);
    /* code */
   }cout<<print(num);
   
}
int main(){


int num;
cout<<"enter number"<<endl;
cin>>num;
cout<<print (num);
return 0;
}