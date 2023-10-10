

#include <stdio.h>

struct driver
{
    char name[46];
    char dlNo[45];
    char route[50];
    int kms;
};

int main()
{
    struct driver d1, d2, d3;
    printf("enter the details of the driver\n");
    printf("enter the name of the  1st driver\n");
    scanf("%s", &d1.name);

    printf("enter the dlNo of the  1st driver\n");
    scanf("%s", &d1.dlNo);

    printf("enter the route of the  1st driver\n");
    scanf("%s", &d1.route);

    printf("enter the no of kms of 1st driver\n");
    scanf("%d", &d1.kms);

    printf("enter the name of the  2nd  driver\n");
    scanf("%s", &d2.name);

    printf("enter the dlNo of the  2nd   driver\n");
    scanf("%s", &d2.dlNo);

    printf("enter the route of the  2nd   driver\n");
    scanf("%s", &d2.route);

    printf("enter the no of kms of 2nd driver\n");
    scanf("%d", &d2.kms);

    printf("enter the name of the  3rd driver\n");
    scanf("%s", &d3.name);

    printf("enter the dlNo of the  3rd driver\n");
    scanf("%s", &d3.dlNo);

    printf("enter the route of the  3rd driver\n");
    scanf("%s", &d3.route);

    printf("enter the no of kms of 3rd driver\n");
    scanf("%d", &d3.kms);

    printf("****************printing information of the driver********************\n");
    printf("---->for driver no 1 .\n  whose name is %s\n", d1.name);
    printf(" dl number is %s\n", d1.dlNo);
    printf("  route is %s\n", d1.route);
    printf("km is    %d\n", d1.kms);

    printf("---->for driver no 2 .\n  whose name is %s\n", d2.name);
    printf(" dl number is %s\n", d2.dlNo);
    printf("  route is %s\n", d2.route);
    printf("km is    %d\n", d2.kms);

    printf("---->for driver no 3 .\n  whose name is %s\n", d3.name);
    printf(" dl number is %s\n", d3.dlNo);
    printf("  route is %s\n", d3.route);
    printf("km is    %d\n", d3.kms);
    return 0;
}