#include <iostream>
using namespace std;
void removeX(char h[]){
    if(h[0]=='\0')return ;
    if(h[0]!='x'){
        removeX(h+1);
    }else{
        int i=1;
        for(;h[i]!='\0';i++){
            h[i-1]=h[i];
        }
           h[i-1]=h[i];
           removeX(h);
    }
}
int main()
{
char h[100];
cout<<"enter string  ";
cin>>h;
removeX(h);
cout<<h;
return 0;
}