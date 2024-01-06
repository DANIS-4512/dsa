//we will do multiplication using addition and substraction
#include <iostream>
using namespace std;

int multiplication(int x,int y){
    cout<<"  "<<x<<"   "<<y<<endl;
    if(x==0||y==0)return 0;
    //if(y==1)return x;
    //else if(y==2)return x+x;
    int ans=multiplication(x,y-1);
    return ans+x;
}

int main()
{
    int x;
    int y;
    cout<<"enter x and y   ";
    cin>>x>>y;
    cout<<multiplication(x,y);

return 0;
}