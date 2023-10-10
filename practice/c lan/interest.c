#include <stdio.h>
#include<stdlib.h>
int main()
{
    int goals;
    void exit();
    printf("Enter the number of goals scored against india\n");
    scanf("%d", &goals);

    if (goals <= 5)
    
    goto sos;
    else
    {
        printf("About time soccer players learnt C\n");
        printf("and said goodbye !adoieu !to soccer\n");
        exit();
    }
    sos:
        printf("TO err is human!");
    

    return 0;
}