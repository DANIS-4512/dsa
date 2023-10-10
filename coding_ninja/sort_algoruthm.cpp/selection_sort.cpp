#include <iostream>
using namespace std;
void selectionSort(int input[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = input[i], minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (input[j] < min)
            {
                min = input[j];
                minindex = j;
            }

        } // swap
        int temp = input[i];
        input[i] = input[minindex];
        input[minindex] = temp;
    }
}

int main()
{
    int input[] = {
        7,
        6,
        5,
        4,
        1,
        2,
        3,
    };
    selectionSort(input, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << input[i]<<"\t";
    }
    cout << endl;

    return 0;
}