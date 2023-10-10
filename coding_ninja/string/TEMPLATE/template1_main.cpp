#include <iostream>
using namespace std;
#include "template1_class.cpp"
int main()
{
    Pair <int >p1;
    Pair <double>p2;
    Pair <char>p3;

    //int 
    p1.setX(10);
    p1.setY(20);

    cout<<p1.getX()<< " "<<p1.getY()<<endl;

    //double
    p2.setX(10.45);
    p2.setY(11.3456);

    cout<<p2.getX()<< "  "<<p2.getY()<<endl;

    //char
    p3.setX('D');
    p3.setY ('K');

    cout<<p3.getX()<< "  "<<p3.getY()<<endl;


    


return 0;
}