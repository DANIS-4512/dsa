//find the length of the string
#include <bits/stdc++.h>
using namespace std;
int find_length(char cha[]){
    if(cha[0]=='\0')return 0;
    
    int small=find_length(cha+1);
    return small+1;
}
int main()
{
char cha[100];
cout<<"enter the string  ";
cin>>cha;
cout<<find_length(cha);
return 0;
}