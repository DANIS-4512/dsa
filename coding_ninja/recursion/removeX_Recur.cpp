#include <iostream>
using namespace std;
string removeX(string a)
{
    if(a.length()==0)return "";
    if(a[0]=='x')
    return removeX(a.substr(1));

    else{
        return a[0]+removeX(a.substr(1));
    }    
}
int main()
{
    string a;
    cin >> a;
    cout<<removeX(a);
    

    return 0;
}