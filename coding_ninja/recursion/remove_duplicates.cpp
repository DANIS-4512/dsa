#include <iostream>
using namespace std;
void remove_duplicates(char a[]){
    if(a[0]=='\0')return ;
    if(a[0]==a[1]){
        int i=1;
        for(;a[i]!='\0';i++){
            a[i-1]=a[i];
        }a[i-1]=a[i];

    }remove_duplicates(a+1);
}
int main()
{
char a[1000];
cin>>a;
remove_duplicates(a);
cout<<a;
return 0;
}