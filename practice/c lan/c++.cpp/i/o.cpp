#include <iostream>
#include <string.h>
using namespace std;
int main(){

    //resize
    string str="danish is a good boy.";

    cout<<"intial string is : ";
    cout<<str<<endl;


    str.resize(13);
    cout<<"after resize : ";
    cout<<str<<endl;

    //capacity
    cout<<"the capacity string is: ";
    cout<<str.capacity()<<endl;

    //length
    cout<<"the length of the string is : ";
    cout<<str.length()<<endl;


    //shring_to _fit

    str.shrink_to_fit();
    cout<<"the new capacity after shrinking is :L ";
    cout<<str.capacity()<<endl;
    return 0;
}