#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "entert n";
    cin >> n;
    int i = 1;
    char A = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char k = ((n + A) -2)+j;
            cout << k;

            
            j++;
        }
        cout << endl;
        A--;
        i++;
    }cout<<sizeof(A);

    return 0;
}