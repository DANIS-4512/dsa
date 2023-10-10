#include <iostream>
#include <cstring>
using namespace std;
int main()
{
char input1[199];
char input2[199];
cout<<"enter input 1 and input2"<<endl;
cin>>input1>>input2;
int hel=strcmp(input1,input2);
cout<<hel;
return 0;
}// return is ==0 ,then both the input are equal
//return is == -1,then both are unequal