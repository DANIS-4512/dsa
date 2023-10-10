#include <iostream>
#include<cstring>
using namespace std;
int main()
{
char input[100];
char input2[100];

cout<<"enter array";
cin>>input>>input2;
strncmp(input,input2,5);
cout<<input<<" "<<input2 <<endl;

}