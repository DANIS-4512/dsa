#include <iostream>
using namespace std;
void duplicate(char* n){
    if (n[0]=='\0')
    {
        return ;
    }
    if (n[0]==n[1])
    {
        for (int i = 0; n[i] !='\0'; i++)
        {
            n[i]=n[i+1];
        }
    duplicate(n);
    }
    duplicate(n+1);

    
    

}
int main()
{
char n[100];
cout<<"enter char"<<endl;
cin>>n;
duplicate(n);
cout<<n;
return 0;
}