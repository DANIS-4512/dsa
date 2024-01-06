#include <cstring>
#include <iostream>
using namespace std;
bool palindrome(char b[],int s,int e){
    if (s==e)return true;
    if(b[s]!=b[e])return false;
    return palindrome(b,s+1,e-1);
    
    
}
bool check_palindrome(char b[]){
    int  n=strlen(b);
    if(n==0)return true;
    return palindrome(b,0,n-1);
}
int main()
{
char b[100];
cout<<"enter the string        ";
cin>>b;
cout<<check_palindrome(b);
return 0;
}