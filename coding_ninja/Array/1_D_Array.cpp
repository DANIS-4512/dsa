#include <iostream>
using namespace std;
// for counting length of the character in the array
int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
// driver code
int main()
{

    char name[10];
    cout << "Enter your name: ";
    cin >> name;
    // name[3]='\0';  for checking the null character as  it don't print after null character 

    cout << "Name is: \n"
         << name << endl;

    // function call
    cout << "length is : " << length(name) << endl;
}