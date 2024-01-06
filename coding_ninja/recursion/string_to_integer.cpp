#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int string_to_integer(string a){
    int b;
    if(a.length()==1){
        if(a[0]=='1'){
            b= '1'-'0';
        }
    }
    int smallcal=b*pow(10,a.length())+a;
    return string_to_integer(smallcal);
}
int main()
{
string a;
cin>>a;
cout<<string_to_integer(a);
return 0;
}