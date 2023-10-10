#include <iostream>
#include <cstring>
using namespace std;
int main()
{
char input[199];
cout<<"enter the character"<<endl;
cin.getline(input,100);
cout<<strlen(input)<<endl;
return 0;
}