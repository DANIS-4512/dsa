#include <iostream>
using namespace std;
void printArray(int input[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}
bool linearSearch(int input[], int size, int key)
{

    cout << "enter key";
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (key == input[i])
        {
            cout << true;
        }
        else if (key != input[i])
        {
            cout << false;
        }
    }
}
    int main()
    {
        int input[100];
        int size;
        cout << "enter size";
        cin >> size;
        int key;
        cout << "enter the required array";
        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        printArray(input, size);
        linearSearch(input, size, key);

        return 0;
    }

