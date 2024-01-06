//replace the character : Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
//Do this recursively.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void replace_char(char s[],char a,char x){
    if(s[0]=='\0')return ;

    if(s[0]==a){
        s[0]=x;
    }replace_char(s+1,a,x);
}
int main()
{
char s[100];
cin>>s;cout<<endl;
char a,x;

cin>>a>>x ;
replace_char(s,a,x);
cout<<s;
}