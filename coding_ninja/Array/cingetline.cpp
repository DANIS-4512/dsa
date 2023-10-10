#include <iostream>
using namespace std;
int main()
{
char input[100];
cout<<"enter character in the ";
cin.getline(input,100,'z');
cout<<input;

return 0;
}