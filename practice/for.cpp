#include <iostream>
using namespace std;
int main(){
    char my_string[]="dani";
    char my_name[]="danish raza";
    cout<<"take a break\n"<<endl;

    for(int i=0; my_string [i] !=0;i++){
        cout<< "character is :"<<my_string<<endl;
    }
    for (char *cp =my_name;*cp !=0;cp++){
        cout<<"the character is: "<<*cp<<endl;
    }
    for (char i :my_name){
        cout<<"char is: "<<i <<endl;
    }
    return 0;
}