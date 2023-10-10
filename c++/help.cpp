#include <iostream>
using namespace std;
int main()
{
    int score=900;
    int *myp=&score;
    printf("value of score is %d\n",score);
    printf("value of pointer is %p\n",myp);

    int &another_score=score;//here we are doing changing  the data of score  by reference "&"
    another_score=1800;
    printf("the value of score is %d\n",score);
    printf("the value of pointer is %p\n",myp);
// by using reference we can change the actual value .
//by using pointer we come to know the the actual path of memory location and cant alter the actual data..


    return 0;
}