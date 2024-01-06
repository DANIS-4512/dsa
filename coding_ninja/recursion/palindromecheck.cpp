#include <string.h>
#include <cstring>
#include <iostream>
using namespace std;
int len(char b[]){
    int count=0;
    for(int i=0;b[i]!='\0';i++){
        count++;
    }return count;
}
bool helper(char b[],int start,int end){

 for(int i=0;i<strlen(b);i++){
    for(int j=end;j>=i;j--){
        if(b[i]==b[j]){
            return true;
        }else{
            return false;
        }
    }
 }   
}
bool check_palindrome(char b[]){
    int start=b[0];
    int end=len(b)-1;
    if(strlen(b)==0||strlen(b)==1)return true;
    //small cal
    if(helper(b,start,end)){
        return true;
    }else{
        helper(b,start++,end-1);
    }


}
int main()
{
char b[100];
 cout<<"enter the string  ";cin>>b;

 cout<<check_palindrome(b);
 
return 0;
}