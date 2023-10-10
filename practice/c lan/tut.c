#include <stdio.h>
int main()
{
    int a[2]={1,2};
    void *p=&a;
    p=p+sizeof(int);
    printf("%d" , *(int*)p);
    return 0;
}