
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i < 10)
    {
        if (i == 4)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;




    }



    for (int j = 0; j < 10; j++)
    {
        if (j==8)
        {
            continue;

        }
        cout<<'\t'<<j<<endl;
        
    }
    
}

