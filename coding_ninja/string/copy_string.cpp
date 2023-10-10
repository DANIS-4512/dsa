#include <iostream>
#include <cstring>
using namespace std;
int main()
{
 char input[100];
 char input2[100];
 cout<<"enter array of input 1 and 2"<<endl;
 cin>>input>>input2;
 strcpy(input,"quest");
 cout<<input<<input2;
return 0;
}