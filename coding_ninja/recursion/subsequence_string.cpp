// to find the subsequemce of the string
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int subs(string input, string output[])
{
    if (input[0] == '\0')
    {
        output[0] = "";
        return 1;
    }
    string substring = input.substr(1);
   int SmallStringSize = subs(substring, output);
    for (int i = 0; i < SmallStringSize; i++)
    {
        output[i + SmallStringSize] = input[0]+output[i];
    }
    return 2 * SmallStringSize;
}
int main()
{
    string input;
    cout << "enter the string to find the subsequence" << endl;
    cin >> input;
    string *output = new string[1000];
    int count = subs(input, output);
    for (int i = 0; i < count; i++)
    {
        cout << output[i] << endl;
    }

    return 0;
}