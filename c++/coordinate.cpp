#include <iostream>
using namespace std;
int main(){
    int choice;
    float temp,countemp;
    cout <<"Temperature conversion menu\n";
    cout<<"1. fahrenheit to celsius\n";
    cout <<"2 . celsius to fahrenheit\n";
    cout <<"enter your choice\n";
    cin >>choice;
    if (choice==1)
    {
        cout<<"\n"<<"enter the temperature in fahrenheit: ";
        cin>>temp;
        countemp= (temp -32)/1.8;
        cout<<"the temperature in celsius is : "<<countemp<<"\n";       
    }
    else
    {
        cout <<"enter the temperature in celsius : ";
        cin>>temp;
        countemp=1.8*temp+32;
        cout<<" the temperature in fahrenheit is : "<<countemp<<"\n";
    }
    

}