#include <iostream>
using namespace std;
#include "template2_class.cpp"
int main()
{
    Pair<int ,double>p1;
    // here int=T
    //here double=V
    p1.setX(100);
    p1.setY(100.457);
    cout<<p1.getX()<<"  "<<p1.getY()<<endl;
return 0;
}