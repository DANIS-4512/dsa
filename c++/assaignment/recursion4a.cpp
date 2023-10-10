#include <iostream>

using namespace std;
int solution(int a,int b){
    if (a==0||b==0)
    {
        return 1;
    }cout<<b<<'\t'<<a<<endl;
    return (a*solution(a,b-1));
    
}
int main()
{
int a,b;
cout<<"enter number and power"<<endl;
cin>>a>>b;
cout<<solution(a,b);
return 0;
}