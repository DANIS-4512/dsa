#include <stdio.h>

int fib_recursive(int  n){
    if (n==1 || n==2)
    {
        return n+1;
    }else{
        return fib_recursive(n-1)+fib_recursive(n-2);
    }
    

    return 0;
}

int fib_iterative(int n ){
    int a =0;
    int b =1;
    for (int i = 0; i < n-1 ; i++)
    {
        b=a+b;
        a=b-a;
    }
    



    return 0;
}
int main()
{   int number;

    
    
    printf("enter the index to get the fibonacce series\n");
    
    scanf("%d",&number);
    printf("the value of fibonacce series at position no %d  using iterative approach is %d\n , ",number,fib_iterative(number));
    printf("the value of fibonacce number at position nio %d using recursive approach os %d\n",number,fib_recursive(number));
    return 0;
}
