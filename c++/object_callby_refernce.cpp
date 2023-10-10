#include <iostream>

#include <string.h>
using namespace std;
class Time
{
    int hrs, mins, secs;
    char suf[4];

public:
    int tot_secs;
    void gettime(int h, int m, int s)
    {
        hrs == h;
        mins == m;
        secs == s;
        tot_secs = (hrs * 60) + (mins * 60) + secs;
        strcpy(suf, "Hrs");
    }
    void puttime(void)
    {
        cout << "Time is: " << hrs << ":" << mins << ":" << secs << suf << "\n";
    }
};