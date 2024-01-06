#include <iostream>
using namespace std;
string replace_pi(string a){
    if(a.length()==0||a.length()==1)return a;
    if(a[0]=='p'&&a[1]=='i'){
        string small_output=replace_pi(a.substr(2));
        return "3.14"+small_output;
    }
    return a[0]+replace_pi(a.substr(1));
}
int main()
{
    string a;
    cin >> a;
    cout<<replace_pi(a);
   
    return 0;
}